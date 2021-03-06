#include "HAL_Watchdog.h"
#include "stm32f0xx_rcc.h"

#define SYS_CLK 48000000
#define TIMER_FREQUENCY 1000 //1 KHZ (1 ms period)
#define DELAY 44//in ms

int main()
{
    // TODO- implement
    HAL_Watchdog_Init();
    RCC->APB1ENR |= RCC_APB1ENR_TIM6EN;
    TIM6->PSC = SYS_CLK/TIMER_FREQUENCY; 
    TIM6->CR1 |= (TIM_CR1_ARPE | TIM_CR1_URS | TIM_CR1_DIR);
    pet();
    while(1==1){
        TIM6->ARR = DELAY; 
        TIM6->EGR |= TIM_EGR_UG;
        TIM6->SR = 0;
        TIM6->CR1 |= TIM_CR1_CEN;
        while(TIM6->SR == 0);
        pet();
    }
}