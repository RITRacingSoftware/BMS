#include <stdio.h>

#include "unity.h"

#include "FaultManager.h"

#include "MockCAN.h"

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

void setUp(void)
{
    FaultManager_init();
}

/**
 * Check that no faults are active at startup.
 */
void test_FaultManager_start_no_faults(void)
{
    for (int code = 0; code < FaultCode_NUM; code++)
    {
        char err_msg[50];
        sprintf(err_msg, "Fault code %d active at start.", code);
        TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code) == false, err_msg);
    }
}

/**
 * Test that faults are reported as active after being set and inactive after
 * being cleared.
 */
void test_FaultManager_fault_and_clear(void)
{
    float unused_fault_data = 42;
    char err_msg[70];
    sprintf(err_msg, "is_any_fault_active true at startup");
    TEST_ASSERT_MESSAGE(FaultManager_is_any_fault_active() == false, err_msg);

    // check that each fault sets correctly and the state of faults is consistent
    // this is important since FaultManager uses a bitwise implementation that is prone to overwrite events
    for (int code = 0; code < FaultCode_NUM; code++)
    {
        // make sure each fault sets correctly
        CAN_send_message_ExpectAnyArgs();
        FaultManager_set_fault_active(code, &unused_fault_data);
        sprintf(err_msg, "Fault code %d failed to set.", code);
        TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code) == true,  err_msg);

        // make sure no other faults were cleared
        for (int code2 = 0; code2 < code; code2++)
        {
            sprintf(err_msg, "Fault code %d was cleared after setting code %d.", code2, code);
            TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code2) == true, err_msg);
        }

        // make sure no other faults were set
        for (int code2 = code + 1; code2 < FaultCode_NUM; code2++)
        {
            sprintf(err_msg, "Fault code %d was set after setting code %d.", code2, code);
            TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code2) == false, err_msg);
        }

        TEST_ASSERT_MESSAGE(FaultManager_is_any_fault_active() == true, "is_any_fault_true not true when faulted");
    }
    
    // check that each fault clears correctly and the state of faults is consistent
    for (int code = 0; code < FaultCode_NUM; code++)
    {
        TEST_ASSERT_MESSAGE(FaultManager_is_any_fault_active() == true, "is_any_fault_active not true when not finished clearing");
        FaultManager_clear_fault(code);
        sprintf(err_msg, "Fault code %d failed to clear.", code);
        TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code) == false, err_msg);

        // make sure no other faults were cleared
        for (int code2 = code + 1; code2 < FaultCode_NUM; code2++)
        {
            sprintf(err_msg, "Fault code %d was cleared after clearing code %d.", code2, code);
            TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code2) == true, err_msg);
        }

        // make sure no other faults were set
        for (int code2 = 0; code2 < code; code2++)
        {
            sprintf(err_msg, "Fault code %d was set after clearing code %d.", code2, code);
            TEST_ASSERT_MESSAGE(FaultManager_is_fault_active(code2) == false, err_msg);
        }
    }

    TEST_ASSERT_MESSAGE(FaultManager_is_any_fault_active() == false, "is_any_fault_active true after clearing faults");
}
