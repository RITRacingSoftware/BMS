#ifndef HAL_ISOSPI_H
#define HAL_ISOSPI_H

#include "FaultManager.h"

typedef enum  //NEED TO IMPLEMENT
{
    thisPin, thatPin
} PIN;

void HAL_IsoSpi_init(void);
Error_t HAL_IsoSpi_transmit_and_receive(PIN slave_select, char* tx, int tx_len, char* rx, int rx_len);

#endif // HAL_ISOSPI_H