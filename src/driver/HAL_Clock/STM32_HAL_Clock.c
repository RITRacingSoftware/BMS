#include "HAL_Clock.h"
#include "stm32f0xx.h"
#include "stm32f0xx_rcc.h"

#define HSI48_SOURCE 0xC

void HAL_Clock_init(void)
{
    // initialize the HSI48 Clock and switch to it
    FLASH->ACR &= ~(0x3);
    FLASH->ACR |= 1;
    // enable HSI48 clock
    RCC_HSI48Cmd(ENABLE);
    // wait for HSI48 clock to be ready
    while(!RCC_GetFlagStatus(RCC_FLAG_HSI48RDY));
    // tell system clock (which CAN uses) to use HSI48 clock
    RCC_SYSCLKConfig(RCC_SYSCLKSource_HSI48);
    // wait for system clock to switch over to HSI48
    while(RCC_GetSYSCLKSource() != HSI48_SOURCE);
}