#include "unity.h"

#include "DriveMonitor.h"

#include "MockFaultManager.h"
#include "MockShutdownLine.h"

/**
 * Verify the DriveMonitor doesn't assert the shutdown line when no faults
 * are present.
 */
void test_DriveMonitor_nominal(void)
{
    DriveMonitor_init();

    // run for 10 seconds with no faults
    for (int ms = 0; ms < 10000; ms++)
    {
        // simulate nominal conditions
        for (int code = 0; code < FaultCode_NUM; code++)
        {
            FaultManager_is_fault_active_ExpectAnyArgsAndReturn(false);
        }
        ShutdownLine_nominal_Expect();
        DriveMonitor_1kHz();
        char err_msg[100];
        sprintf(err_msg, "Driving was not allowed with no fault conditions.");
        TEST_ASSERT_MESSAGE(DriveMonitor_is_driving_allowed() == true, err_msg);

        resetTest();
    }
}

/**
 * Verify that an overcurrent event immediately shuts down the car.
 */
void test_DriveMonitor_shutdown_overcurrent(void)
{
    char err_msg[100];

    DriveMonitor_init();

    // "set" the overcurrent fault but no others
    for (int code = 0; code < FaultCode_NUM; code++)
    {
        FaultManager_is_fault_active_ExpectAndReturn(code, code == FaultCode_OVER_CURRENT ? true : false);
    }

    ShutdownLine_indicate_fault_Expect();
    DriveMonitor_1kHz();

    sprintf(err_msg, "DriveMonitor did not indicate over current fault.");
    TEST_ASSERT_MESSAGE(DriveMonitor_is_driving_allowed() == false, err_msg);
}