#include <stdio.h>

// includes for mocking
#include "unity.h"

// module under test
#include "CurrentSense.h"

// mocked includes
#include "MockHAL_CurrentSensor.h"
#include "MockFaultManager.h"
#include "MockCAN.h"

// arbitrary cap on the time it takes for the filter to initialize
// unit tests will fail if it takes longer
#define MAX_FILTER_INIT_MS 20

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

/**
 * Verify that the CurrentSense module is in fact using a low pass filter on the sensor readings.
 */
void test_CurrentSense_low_pass_filter(void)
{
    // here instead of in setUp
    // this is because this function uses resetTest, which avoids memory
    // issues but also calls setUp and we dont want init running each for loop iteration.
    CurrentSense_init();

    // this test keeps current at CURRENT_STEADY
    // and periodically inputs CURRENT_SPIKE for a sample period
    const float CURRENT_STEADY = 10.0;
    const float CURRENT_SPIKE = 100;

    for (int i = 0; i < 500; i++)
    {
        float current_A;

        // simulate spikes of current
        if (i % 10)
        {
            current_A = 10.0;
        }
        else
        {
            current_A = 100.0;
        }

        Error_t err;
        err.active = false;

        // inject test current and nominal error status
        HAL_CurrentSensor_read_current_ExpectAnyArgsAndReturn(err);
        HAL_CurrentSensor_read_current_ReturnThruPtr_current(&current_A);
        // no active errors so fault clear should happen
        FaultManager_clear_fault_ExpectAnyArgs();

        CurrentSense_1kHz();
        
        float read_current_A;
        bool current_valid = CurrentSense_get_current(&read_current_A);

        // arbitrary indicator that the current is taking too long to go valid
        if ((i >= MAX_FILTER_INIT_MS) && !current_valid)
        {
            TEST_ASSERT_MESSAGE(false, "Filters failed to initialize.");
        }

        if (current_valid)
        {
            // verify current is always less than the spike current
            // and >= the steady current
            char err_msg[100];
            sprintf(err_msg, "Current (%fA) outside interval: [%f,%f)", read_current_A, CURRENT_STEADY, CURRENT_SPIKE);

            TEST_ASSERT_MESSAGE(read_current_A >= CURRENT_STEADY, err_msg);
            TEST_ASSERT_MESSAGE(read_current_A < CURRENT_SPIKE, err_msg);
        }

        // Tells CMock to evaluate expectations here then clean up memory.
        // Otherwise CMock waits till every for loop iteration is done and blows up in memory.
        resetTest();
    }
}

/**
 * Verify a fault is triggered if the current sensor returns an error.
 * Additionally, check that the current is always indicated as invalid if an error occurred in the last read.
 */
void test_CurrentSense_sensor_fault(void)
{
    CurrentSense_init();

    Error_t err;
    err.active = false;

    // give the filter plenty of time to intialize
    for (int i = 0; i < MAX_FILTER_INIT_MS; i++)
    {
        float current_A = 10;

        HAL_CurrentSensor_read_current_ExpectAnyArgsAndReturn(err);
        HAL_CurrentSensor_read_current_ReturnThruPtr_current(&current_A);
        // no active errors so fault clear should happen
        FaultManager_clear_fault_ExpectAnyArgs();

        CurrentSense_1kHz();
    }

    // verify filters initialized
    float read_current_A;
    TEST_ASSERT_MESSAGE(CurrentSense_get_current(&read_current_A) == true, "Filters failed to initialize.");

    // now fault current
    err.active = true;

    // should trigger fault
    HAL_CurrentSensor_read_current_ExpectAnyArgsAndReturn(err);
    FaultManager_set_fault_active_ExpectAnyArgs();
    CurrentSense_1kHz();
    TEST_ASSERT_MESSAGE(CurrentSense_get_current(&read_current_A) == false, "Sensor error but CurrentSense indicated valid.");
}

/**
 * Verify that when the current sensor reads a steady current, the CurrentSense
 * module returns the steady value. In other words, check for filter errors that 
 * erroneously alter a steady state current.
 */
void test_CurrentSense_steady(void)
{
    CurrentSense_init();

    for(int i = 0; i < 100; i++)
    {
        float injection_current_A = 7;
        Error_t err;
        err.active = false;
        // inject test current and nominal error status
        HAL_CurrentSensor_read_current_ExpectAnyArgsAndReturn(err);
        HAL_CurrentSensor_read_current_ReturnThruPtr_current(&injection_current_A);
        // no active errors so fault clear should happen
        FaultManager_clear_fault_ExpectAnyArgs();

        CurrentSense_1kHz();
        
        float read_current_A;
        bool current_valid = CurrentSense_get_current(&read_current_A);

        if ((i >= MAX_FILTER_INIT_MS) && !current_valid)
        {
            TEST_ASSERT_MESSAGE(false, "Filters failed to initialize.");
        }

        if (current_valid)
        {
            char err_msg[100];
            sprintf(err_msg, "Current read (%fA) on iteration %d did not match injected steady state current (%fA).", read_current_A, i, injection_current_A);
            TEST_ASSERT_MESSAGE(read_current_A == injection_current_A, err_msg);
        }

        resetTest();
    }
}