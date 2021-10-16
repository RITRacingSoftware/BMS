#ifndef HAL_CAN_H
#define HAL_CAN_H
#include <stdint.h>

#include "FaultManager.h"
#include "CAN.h"
#include "semphr.h"

extern SemaphoreHandle_t can_message_recieved_semaphore;
extern SemaphoreHandle_t can_message_transmit_semaphore;

/**
 * Initializes stm32 for CAN message transmissions, must be called befor a message is sent
 */
void HAL_Can_init(void);

/**
 * Initializes a filter for the given 32 bit CAN id, only ids that a filter has been initialized for will be recieved. There can only be 14 filters.
 */
void HAL_Can_init_id_filter_32bit(uint32_t id);

/**
 * Initializes a filter for the given 16 bit CAN ids, only ids that a filter has been initialized for will be recieved. There can only be 14 filters.
 */
void HAL_Can_init_id_filter_16bit(uint16_t id1, uint16_t id2, uint16_t id3, uint16_t id4);

/**
 * Transmits the CAN message
 */
Error_t HAL_Can_send_message(uint32_t id, int dlc, uint64_t data); //Changed to void return from Error_t

/**
 * Returns the number of empty transmit mailboxes (max of three)
 */
uint8_t HAL_number_of_empty_mailboxes(void);

/**
 * CAN recieve and transmit interrupt handler
 */
void CEC_CAN_IRQHandler(void);

#endif // HAL_CAN_H