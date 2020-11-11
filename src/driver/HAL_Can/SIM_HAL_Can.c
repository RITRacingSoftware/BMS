#include "HAL_Can.h"
#include "BmsSimClient.h"

Error_t HAL_Can_send_message(int id, int dlc, uint64_t data)
{
    BmsSimClient_send_CAN(id, data);
}