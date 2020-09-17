// includes for mocking
#include "unity.h"

// module under test
#include "SlaveInterface.h"

// mocked includes
#include "MockFaultManager.h"
#include "MockHAL_SlaveChips.h"

/**
 * The slave interface reads are basically memcpys. Make sure we didn't muck that up.
 */
void test_SlaveInterface_cell_info_read(void)
{
    BatteryModel_t bm;

    // set up some voltages we expect to see in the same order in the battery model
    float mock_voltages[NUM_SERIES_CELLS];
    bool mock_drain_states[NUM_SERIES_CELLS];

    for(int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        mock_voltages[i] = i;
        mock_drain_states[i] = (i % 2 == 0);
    }

    // first test with no error, new data should end up in battery model and faults should be cleared
    Error_t err;
    err.active = false;
    HAL_SlaveChips_get_all_cell_data_ExpectAnyArgsAndReturn(err);
    FaultManager_clear_fault_ExpectAnyArgs();
    
    HAL_SlaveChips_get_all_cell_data_ReturnArrayThruPtr_voltages(mock_voltages, NUM_SERIES_CELLS);
    HAL_SlaveChips_get_all_cell_data_ReturnArrayThruPtr_is_draining(mock_drain_states, NUM_SERIES_CELLS);

    SlaveInterface_read_cell_info(&bm);

    // simultaneously check for copied data and copy over next data set
    for(int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        char err_msg[100];
        sprintf(err_msg, "no error cell %d voltage not expected", i);
        TEST_ASSERT_MESSAGE(bm.cells[i].voltage == i, err_msg);
        sprintf(err_msg, "no error cell %d drain state not expected", i);
        TEST_ASSERT_MESSAGE(bm.cells[i].is_draining == (i % 2 == 0), err_msg);
        mock_voltages[i] = i * 10;
        mock_drain_states[i] = (i % 2 == 1);
    }

    // now run again with an error. Modified voltages/drain states from for loop above should NOT appear in battery model
    err.active = true;

    HAL_SlaveChips_get_all_cell_data_ExpectAnyArgsAndReturn(err);
    FaultManager_set_fault_active_ExpectAnyArgs();

    HAL_SlaveChips_get_all_cell_data_ReturnArrayThruPtr_voltages(mock_voltages, NUM_SERIES_CELLS);
    HAL_SlaveChips_get_all_cell_data_ReturnArrayThruPtr_is_draining(mock_drain_states, NUM_SERIES_CELLS);

    SlaveInterface_read_cell_info(&bm);

    // check that nothing changed in the battery model
    for(int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        char err_msg[100];
        sprintf(err_msg, "errored cell %d voltage not expected", i);
        TEST_ASSERT_MESSAGE(bm.cells[i].voltage == i, err_msg);
        sprintf(err_msg, "errored cell %d drain state not expected", i);
        TEST_ASSERT_MESSAGE(bm.cells[i].is_draining == (i % 2 == 0), err_msg);
    }
}

void test_SlaveInterface_temp_read(void)
{
    TempModel_t tm;

    // setup our test input- these values should end up in the same order in the temp model
    float mock_therm_V[NUM_THERMISTOR];
    for (int i = 0; i < NUM_THERMISTOR; i++)
    {
        mock_therm_V[i] = i;
    }

    // first test with no error, new data should end up in temp model and faults should be cleared
    Error_t err;
    err.active = false;
    HAL_SlaveChips_get_all_tm_readings_ExpectAnyArgsAndReturn(err);
    FaultManager_clear_fault_ExpectAnyArgs();
    
    HAL_SlaveChips_get_all_tm_readings_ReturnArrayThruPtr_temperatures(mock_therm_V, NUM_THERMISTOR);

    SlaveInterface_read_temperature_info(&tm);

    // simultaneously check for copied data and copy over next data set
    for(int i = 0; i < NUM_THERMISTOR; i++)
    {
        char err_msg[100];
        sprintf(err_msg, "no error thermistor %d voltage not expected", i);
        TEST_ASSERT_MESSAGE(tm.tm_readings_V[i] == i, err_msg);
        mock_therm_V[i] = i * 10;
    }

    // now run again with an error. Modified voltages from for loop above should NOT appear in temp model
    err.active = true;

    HAL_SlaveChips_get_all_tm_readings_ExpectAnyArgsAndReturn(err);
    FaultManager_set_fault_active_ExpectAnyArgs();

    HAL_SlaveChips_get_all_tm_readings_ReturnArrayThruPtr_temperatures(mock_therm_V, NUM_THERMISTOR);

    SlaveInterface_read_temperature_info(&tm);

    // check that nothing changed in the battery model
    for(int i = 0; i < NUM_THERMISTOR; i++)
    {
        char err_msg[100];
        sprintf(err_msg, "errored thermistor %d voltage not expected", i);
        TEST_ASSERT_MESSAGE(tm.tm_readings_V[i] == i, err_msg);
    }
}