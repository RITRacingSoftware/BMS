#ifndef HAL_CAN_H
#define HAL_CAN_H
#include <stdint.h>

#include "FaultManager.h"

Error_t HAL_Can_send_message(int id, int dlc, uint64_t data);


#endif // HAL_CAN_H