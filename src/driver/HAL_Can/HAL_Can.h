#ifndef HAL_CAN_H
#define HAL_CAN_H
#include <stdint.h>

#include "FaultManager.h"
#include "CAN.h"

/**
 * Initializes stm32 for CAN message transmissions, must be called befor a message is sent
 */
void HAL_Can_init(void);

/**
 * Transmits the CAN message
 */
Error_t HAL_Can_send_message(int id, int dlc, uint64_t data); //Changed to void return from Error_t

/**
 * Returns the number of empty transmit mailboxes (max of three)
 */
uint8_t HAL_number_of_empty_mailboxes(void);

#endif // HAL_CAN_H