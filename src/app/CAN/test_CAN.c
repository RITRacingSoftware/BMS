#include "unity.h"

#include "CAN.h"

#include "MockHAL_Can.h"

void setUp(void)
{
    CAN_init();
}

/**
 * Verify the CAN module does not begin errored out.
 */
void test_CAN_start_no_error(void)
{
    // verify starting with no error
    TEST_ASSERT_MESSAGE(CAN_get_error() == false, "CAN started with error.");
}

/**
 * Verify that an error is indicated by the CAN module if it could not send the last message.
 */
void test_CAN_transmission_error(void)
{
    // force the driver to return an error
    Error_t err;
    err.active = true;
    HAL_Can_send_message_ExpectAnyArgsAndReturn(err);
    CAN_send_message(CAN_ID_BmsStatus);

    TEST_ASSERT_MESSAGE(CAN_get_error() == true, "CAN did not error after driver did.");
}

/**
 * Verify that an error is indicated by the CAN module if it is requested to send an invalid id.
 */
void test_CAN_invalid_id_error(void)
{
    // dont need to expect a driver send here since that isn't even attempted with a bad id

    CAN_send_message(1000000);

    TEST_ASSERT_MESSAGE(CAN_get_error() == true, "CAN did not error after sending invalid CAN id");
}