#include <math.h>

// includes for mocking
#include "unity.h"

// mocked includes
#include "MockHAL_EEPROM.h"
#include "MockCAN.h"

// unmocked includes
#include "common_macros.h"
#include "BatteryCharacteristics.h"

// module under test
#include "SOCestimator.h"

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

// get a temperature model with a specified average temperature
static TempModel_t tm_with_average(float temp)
{
    TempModel_t tm;

    for (int i = 0; i < NUM_THERMISTOR; i++)
    {
        tm.temps_C[i] = temp;
    }

    return tm;
}

static BatteryModel_t get_battery_model_at_avg_voltage(float voltage)
{
    BatteryModel_t bm;

    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        bm.cells[i].voltage = voltage;
    }

    bm.average_V = voltage;

    return bm;
}

/**
 * Verify the SOCestimator does not begin coulomb counting until
 * a voltage threshold has been reached if no saved SOC exists.
 */
void test_SOCestimator_wait_for_voltage(void)
{
    HAL_EEPROM_read_ExpectAnyArgs();
    eeprom_data_t saved_soc_indicator = 0;

    // indicate there is no saved SOC
    HAL_EEPROM_read_ReturnThruPtr_data(&saved_soc_indicator);
    // another eeprom read should not happen during init

    SOCestimator_init();

    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_raw(), 100.0, 0.01), "invalid initial raw SOC");
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 100, 0.01), "invalid initial corrected SOC");

    float expected_soc = 100;
    float current_A = -50.0; // realistic current at init [satire]
    int num_iter = 10;
    for (int i = 0; i < num_iter; ++i)
    {
        // add drain current over a ms
        SOCestimator_coulomb_count_update_1kHz(current_A);

        // follow along with the algo
        expected_soc = expected_soc + current_A * 1.0 * MS_TO_HR/ BATTERY_CAPACITY_Ah;

        // verify the SOCs reported havent changed since theres no starting SOC yet
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_raw(), 100, 0.01), "invalid pre-init current raw SOC");
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 100, 0.01), "invalid pre-init current corrected SOC");
    }

    BatteryModel_t bm = get_battery_model_at_avg_voltage(0);

    // give SOCestimator a voltage which should allow it to determine a starting SOC and then apply all the saved current at once
    TempModel_t tm = tm_with_average(20);
    SOCestimator_voltage_threshold_update_10Hz(&bm, &tm);

    // need to round here because float math
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_raw(), expected_soc, 0.01), "invalid post-init raw SOC");
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 25.0, 0.01), "invalid post-init corrected SOC");
}

/**
 * Verify the SOCestimator starts coulomb counting immediately if a
 * saved SOC exists.
 */
void test_SOCestimator_saved_value_exists(void)
{
    HAL_EEPROM_read_ExpectAnyArgs();
    eeprom_data_t saved_soc_indicator = 1;

    // indicate there is no saved SOC
    HAL_EEPROM_read_ReturnThruPtr_data(&saved_soc_indicator);
    // another eeprom read should happen to get the soc
    HAL_EEPROM_read_ExpectAnyArgs();
    eeprom_data_t saved_soc = 45;
    HAL_EEPROM_read_ReturnThruPtr_data(&saved_soc);

    SOCestimator_init();

    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_raw(), (float) saved_soc, 0.01), "invalid initial raw SOC");
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), (float) saved_soc, 0.01), "invalid initial corrected SOC");

    float expected_soc = saved_soc;
    float current_A = -50.0; // realistic current at init [satire]
    int num_iter = 10;
    for (int i = 0; i < num_iter; ++i)
    {
        // add drain current over a ms
        SOCestimator_coulomb_count_update_1kHz(current_A);
        // follow along with the algo
        expected_soc = expected_soc + current_A * 1.0 * MS_TO_HR / BATTERY_CAPACITY_Ah;

        // verify the SOCs reported havent changed since theres no starting SOC yet
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_raw(), expected_soc, 0.01), "invalid pre-init current raw SOC");
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), expected_soc, 0.01), "invalid pre-init current corrected SOC");
    }

    BatteryModel_t bm = get_battery_model_at_avg_voltage(0);

    // give SOCestimator a voltage which should clip the voltage to 25
    TempModel_t tm = tm_with_average(25);
    SOCestimator_voltage_threshold_update_10Hz(&bm, &tm);

    // need to round here because float math
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_raw(), expected_soc, 0.01), "invalid post-init raw SOC");
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 25, 0.01), "invalid post-init corrected SOC");
}

/**
 * Verify the SOCestimator does not report an SOC greater than a voltage limited value.
 * Test for different temperature ranges.
 */
void test_SOCestimator_clips_to_voltage_limit(void)
{
    HAL_EEPROM_read_ExpectAnyArgs();
    eeprom_data_t saved_soc_indicator = 0;

    // indicate there is no saved SOC
    HAL_EEPROM_read_ReturnThruPtr_data(&saved_soc_indicator);

    SOCestimator_init();
    
    TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 100, 0.01), "SOC not initialized properly");

    // For each temp index, test a value under/above each voltage limit, run the new temp/voltage combo through
    // SOCestimator and verify the SOC is clipped accordingly.
    for (int i = 0; i < NUM_TEMP_RANGES; i++)
    {
        float ambient_temp_C = i * 10.0;
        TempModel_t tm = tm_with_average(ambient_temp_C);
        char err_msg[100];

        float avg_V = SOC_75_LIMIT_FOR_TEMP_INDEX(i);
        BatteryModel_t bm = get_battery_model_at_avg_voltage(avg_V + .01);
        SOCestimator_voltage_threshold_update_10Hz(&bm, &tm);
        sprintf(err_msg, "temp index %d failed for 100 SOC limit", i);
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 100, 0.01), err_msg);

        avg_V = SOC_50_LIMIT_FOR_TEMP_INDEX(i);
        bm = get_battery_model_at_avg_voltage(avg_V + .01);
        SOCestimator_voltage_threshold_update_10Hz(&bm, &tm);
        sprintf(err_msg, "temp index %d failed for 75 SOC limit", i);
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 75, 0.01), err_msg);

        avg_V = SOC_25_LIMIT_FOR_TEMP_INDEX(i);
        bm = get_battery_model_at_avg_voltage(avg_V + .01);
        SOCestimator_voltage_threshold_update_10Hz(&bm, &tm);
        sprintf(err_msg, "temp index %d failed for 50 SOC limit", i);
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 50, 0.01), err_msg);

        avg_V = SOC_25_LIMIT_FOR_TEMP_INDEX(i);
        bm = get_battery_model_at_avg_voltage(avg_V - .01);
        SOCestimator_voltage_threshold_update_10Hz(&bm, &tm);
        sprintf(err_msg, "temp index %d failed for 25 SOC limit", i);
        TEST_ASSERT_MESSAGE(FLOAT_EQ(SOCestimator_get_soc_corrected(), 25, 0.01), err_msg);
    }
}