#include "unity.h"

#include "ChargeMonitor.h"
#include "f29BmsConfig.h"
#include "common_macros.h"

#include "MockCAN.h"
#include "MockFaultManager.h"
#include "MockHAL_Gpio.h"
#include "MockCurrentSense.h"
#include "MockSOCestimator.h"

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

void setUp(void)
{
    HAL_Gpio_write_Ignore();
    ChargeMonitor_init();
    CAN_send_message_Ignore();
}

/**
 * Verify charging is not initiated when the battery cells are at the accepted max voltage.
 */
void test_ChargeMonitor_start_charged(void)
{
    // fully charged battery
    BatteryModel_t bm;
    bm.largest_V = CHARGED_CELL_V+.1;
    bm.smallest_V = CHARGED_CELL_V+.1;
    
    SOCestimator_reset_soc_Ignore();
    // simulate a few seconds and check for charge requests
    for (int seconds = 0; seconds < 30; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // No current since no ones charging
        float current = 0;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        TEST_ASSERT_MESSAGE(ChargeMonitor_is_charging() == false, "Charging Requested when starting at max charge.");
    }
}

/**
 * Verify charging is not initiated and balancing is never allowed when the vehicle is disconnected from the charger.
 */
void test_ChargeMonitor_disconnected(void)
{
    // randomize cell data, shouldn't matter
    BatteryModel_t bm;
    

    // simulate a few seconds and check for charge requests
    for (int seconds = 0; seconds < 30; seconds++)
    {
        // disconnect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(0);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Random current, shouldn't matter
        float current;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        TEST_ASSERT_MESSAGE(ChargeMonitor_is_charging() == false, "Charging Requested when disconnected from charger.");
        TEST_ASSERT_MESSAGE(ChargeMonitor_is_balancing_allowed() == false, "Cell balancing allowed when disconnected from charger.");
    }
}

/**
 * Verify charging happens when a single cell is below the charged threshold,
 * and does not happen when a single cell is over the max allowed voltage.
 */
void test_ChargeMonitor_single_cell_conditions(void)
{
    // start out with a condition that should cause charging: one cell under the charging threshold and none over the max
    BatteryModel_t bm;
    bm.smallest_V = CHARGED_CELL_V - 1;
    bm.largest_V = CHARGED_CELL_V;

    bool did_charging_begin = false;
    // simulate until charging begins (should be a couple seconds)
    for (int seconds = 0; seconds < 3; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulation nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        did_charging_begin = ChargeMonitor_is_charging();
        if (did_charging_begin) break;
    }
    TEST_ASSERT_MESSAGE(did_charging_begin == true, "Charging did not start with a single cell under threshold.");

    // ensure charging continues with no input changes
    for (int seconds = 0; seconds < 30; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulation nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        TEST_ASSERT_MESSAGE(ChargeMonitor_is_charging() == true, "Charging stopped for no reason.");
    }

    // now simulate a cell balancing condition
    bm.largest_V = MAX_ALLOWED_CELL_V;
    for (int seconds = 0; seconds < 3; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulate nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
    }
    TEST_ASSERT_MESSAGE(ChargeMonitor_is_charging() == false, "Charging did not stop on balancing condition.");
    TEST_ASSERT_MESSAGE(ChargeMonitor_is_balancing_allowed() == true, "Cell balancing not allowed when it needed to be.");

    // get back to charging
    bm.largest_V = CHARGED_CELL_V;
    for (int seconds = 0; seconds < 3; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulation nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        did_charging_begin = ChargeMonitor_is_charging();
        if (did_charging_begin) break;
    }
    TEST_ASSERT_MESSAGE(did_charging_begin == true, "Charging did not resume after balancing.");
}

void test_ChargeMonitor_disconnect(void)
{
    // partially charged battery
    BatteryModel_t bm;
    bm.largest_V = CHARGED_CELL_V - 1;
    bm.smallest_V = CHARGED_CELL_V - 1;
    
    bool charging = false;
    // simulate a few seconds and check for charge requests
    for (int seconds = 0; seconds < 5; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulate nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        charging = ChargeMonitor_is_charging();
        if (charging) break;
    }

    TEST_ASSERT_MESSAGE(charging == true, "Charging never began.");

    // disconnect the charger
    HAL_Gpio_read_ExpectAnyArgsAndReturn(0);
    // clear faults
    FaultManager_is_any_fault_active_ExpectAndReturn(false);
    // Simulation nominal current
    float current = MAX_CHARGING_CURRENT_A;
    CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
    CurrentSense_get_current_ReturnThruPtr_current_A(&current);

    ChargeMonitor_1Hz(&bm);
    TEST_ASSERT_MESSAGE(ChargeMonitor_is_charging() == true, "Charging didn't stop after a disconnect.");
}

/**
 * Verify that the cable must be cycled for charging to resume once completed.
 */
void test_ChargeMonitor_restart_charging(void)
{
    // partially charged battery
    BatteryModel_t bm;
    bm.largest_V = CHARGED_CELL_V - 1;
    bm.smallest_V = CHARGED_CELL_V - 1;
    
    bool charging = false;
    // simulate a few seconds and check for charge requests
    for (int seconds = 0; seconds < 5; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulate nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        charging = ChargeMonitor_is_charging();
        if (charging) break;
    }

    TEST_ASSERT_MESSAGE(charging == true, "Charging never began.");

    // Simulate charging completed due to current
    for (int seconds = 0; seconds < 30; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulate current under threshold
        float current = MAX_CHARGING_CURRENT_A / 10 - 1;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);
        SOCestimator_reset_soc_Ignore();

        ChargeMonitor_1Hz(&bm);
        charging = ChargeMonitor_is_charging();
        if (!charging) break;
    }

    // Verify charging stopped
    TEST_ASSERT_MESSAGE(charging == false, "Charging did not stop with current.");

    // run the state machine for a bit and make sure charging does not resume
    for (int seconds = 0; seconds < 30; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulate current (doesn't matter)
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        charging = ChargeMonitor_is_charging();
        TEST_ASSERT_MESSAGE(!charging, "Charging restarted without cable cycle!");
    }

    // cable cycle
    HAL_Gpio_read_ExpectAnyArgsAndReturn(0);
    FaultManager_is_any_fault_active_ExpectAndReturn(false);
    float current = MAX_CHARGING_CURRENT_A;
    CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
    CurrentSense_get_current_ReturnThruPtr_current_A(&current);
    ChargeMonitor_1Hz(&bm);
    
    // make sure charging resumes now
    for (int seconds = 0; seconds < 5; seconds++)
    {
        // connect the charger
        HAL_Gpio_read_ExpectAnyArgsAndReturn(1);
        // clear faults
        FaultManager_is_any_fault_active_ExpectAndReturn(false);
        // Simulate nominal current
        float current = MAX_CHARGING_CURRENT_A;
        CurrentSense_get_current_ExpectAnyArgsAndReturn(true);
        CurrentSense_get_current_ReturnThruPtr_current_A(&current);

        ChargeMonitor_1Hz(&bm);
        charging = ChargeMonitor_is_charging();
        if (charging) break;
    }

    TEST_ASSERT_MESSAGE(charging, "Charging did not restart after cable cycle!");
}