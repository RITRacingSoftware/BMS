#ifndef BMS_OUT_H_
#define BMS_OUT_H_
#include "stdint.h"

int writeToBms(uint16_t * voltages, int current, uint8_t numCells);
#endif