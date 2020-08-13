#include "unity.h"
#include "CurrentSense.h"
#include "MockHAL_CurrentSensor.h"
#include "MockFaultManager.h"
#include "FaultManager.h"

/*
 * Purpose: verify current reading from sensor is forwarded to application layer.
 * I.e., current sensor reading should be equal to value returned from CurrentSense_get_current.
 * Additionally, verify fault is not set if no fault is indicated by sensor.
 */
void test_CurrentSense_get_current(void)
{
    // injected current that should be returned
    float TEST_CURRENT = 1.2345;
    // injected fault that should be returned
    Fault_t fault;
    fault.code = NO_FAULT;
    // mock a nominal response from the current sensor
    HAL_CurrentSensor_read_current_ExpectAnyArgsAndReturn(fault);
    // mock the test current to be returned through the out parameter
    HAL_CurrentSensor_read_current_ReturnThruPtr_current(&TEST_CURRENT);

    // this test will fail if a fault is set since FaultManager_set_fault_active is not expected
    
    // verify the current reading is what we injected
    float current = CurrentSense_get_current();
    TEST_ASSERT(current == TEST_CURRENT);
}