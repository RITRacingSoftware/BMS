#ifndef BMS_IN_INTERFACE_H_
#define BMS_IN_INTERFACE_H_
#include "stdint.h"

/**
 * @brief Attempts to read from the BMS socket/queue
 * @param sizeToRead The max amount of discharge signals to read
 * @param dischargeSigs Array to place the discharge signal values
 * @return the amount of dischargeSignals read
 */ 
int readFromBMS(uint8_t sizeToRead, uint8_t * dischargeSigs);
#endif