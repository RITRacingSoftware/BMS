#ifndef HAL_SPI_H
#define HAL_SPI_H

#include "FaultManager.h"

typedef enum  //NEED TO IMPLEMENT
{
    thisPin, thatPin
} PIN;

void HAL_Spi_init(void);
Error_t HAL_Spi_transmit_and_receive(PIN slave_select, char* tx, int tx_len, char* rx, int rx_len);

#endif // HAL_SPI_H