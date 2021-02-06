#include "HAL_Watchdog.h"
#include "stm32f0xx_wwdg.h"

#define PCLK1 48 //APB clock DONT KNOW VALUE
#define WWDG_COUNTER_CLOCK 1 //NOT SURE what we want
#define WWDG_TIMEOUT 1 //NOT SURE what we want
#define WINDOW_VALUE 0x7F //Don't know what should be
#define SET_VALUE 0x7F //Value counter is reset to
//MCU resets when counter gets down to 0x40

//t(watchdog) = (tclk) * 4096 * 2^(prescale) * 64
//Ex: clk = 48MHz, prescale: WWD_PRESCALER_8 (2^3 = 8)
//t = (1/48000000) * 4096 * 8 * 64 = 0.04369 s = 43.69 ms
//For 48MHz, max timeout time ~43 ms, min timeout time ~85us

void HAL_Watchdog_Init(){
    //Right now set to 43ms timeout (Prescaler = 8 assuming 48MHz cl)
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_WWDG, ENABLE);
    WWDG_SetPrescaler(WWDG_Prescaler_8); //Can be 1,2,4,8 
    WWDG_SetWindowValue(WINDOW_VALUE);
    WWDG_Enable(0x7F);
}

void pet(){
    WWDG_SetCounter(0x7F);
}