#include "stm32f0xx_adc.h"
#include "HAL_CurrentSensor.h"

int main()
{
    HAL_CurrentSensor_init();

    while(1)
    {
        static float current;
        HAL_CurrentSensor_read_current(&current);
    }
}