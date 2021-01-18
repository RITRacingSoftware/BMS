#include <stdio.h>
#include "HAL_Gpio.h"

#include "BmsSimClient.h"

void HAL_Gpio_init(void)
{
    // ta-da
}

void HAL_Gpio_write(GpioPin_e pin, bool state)
{
    BmsOut* out = BmsSimClient_get_outputs();
    
    switch(pin)
    {
        case GpioPin_STATUS_LED:
            out->status_led = state;
            break;
        
        case GpioPin_CHARGE_ENABLE:
            out->charge_enable = state;
            break;
        
        case GpioPin_SHUTDOWN_LINE:
            out->shutdown_line = state;
            break;

        default:
            printf("....Invalid GPIO Output Written [%d]....\n", pin);
            break;
    }
}

bool HAL_Gpio_read(GpioPin_e pin)
{
    bool retval = false;

    const BmsIn* in = BmsSimClient_get_inputs();
    BmsOut* out = BmsSimClient_get_outputs();

    switch(pin)
    {
        case GpioPin_STATUS_LED:
            retval = out->status_led;
            break;

        case GpioPin_CHARGER_AVAILABLE:
            retval = in->charger_available;
            break;
        
        default:
            printf("....Invalid GPIO Input Read [%d]....\n", pin);
            break;
    }

    return retval;
}