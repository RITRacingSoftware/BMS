#include "HAL_Gpio.h"

int main()
{
    HAL_Gpio_init();
    for(;;)
    {
        bool current_state = HAL_Gpio_read(GpioPin_STATUS_LED);
        HAL_Gpio_write(GpioPin_STATUS_LED, current_state ^ 1);
        for (int i = 0; i < 50000000; i++);
        
    }
}