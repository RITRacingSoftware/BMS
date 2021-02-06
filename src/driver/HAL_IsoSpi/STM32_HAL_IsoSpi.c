#include "HAL_IsoSpi.h"

#include "stm32f0xx_spi.h"
#include "stm32f0xx.h"

#define ISOSPI_PINS //NEED to define

void HAL_IsoSpi_Init()
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);
    RCC_AHBPeriphClockCmd();
    GPIO_PinAFConfig(GPIOA, ISOSPI_PINS, GPIO_MODE_AF);
}