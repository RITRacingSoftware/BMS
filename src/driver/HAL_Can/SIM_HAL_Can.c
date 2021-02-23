#include "HAL_Can.h"
#include "BmsSimClient.h"

Error_t HAL_Can_send_message(uint32_t id, int dlc, uint64_t data)
{
    BmsSimClient_send_CAN(id, data);
    Error_t err;
    err.active = false;
    return err;
}

void HAL_Can_init(void)
{
    // lel
}

/**
 * Returns the number of empty transmit mailboxes (max of three)
 */
uint8_t HAL_number_of_empty_mailboxes(void)
{
    return 3;
}

/**
 * Returns whether there are any transmit errors
 */
bool HAL_get_error(void)
{
    return false;
}
