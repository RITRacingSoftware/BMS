#include "HAL_Can.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_can.h"
//#include "CAN.h"


int main()
{
    // TODO- implement
    
        HAL_Can_init();
        // can_message message = {0x010, 8, 0x00000000};
        // HAL_Can_send_message(message.id, message.dlc, message.data);
        // HAL_number_of_empty_mailboxes();
        // HAL_get_error();
        // message.data = 0x00000001;
        // HAL_Can_send_message(message.id, message.dlc, message.data);
        for(;;)
        {
            HAL_Can_send_message(0x10, 8, 0x12345678abcdef77);
        }
}