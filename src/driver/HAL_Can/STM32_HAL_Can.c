#include "HAL_Can.h"
#include "stm32F0xx.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_can.h"
#include "stm32f0xx_misc.h"
#include <string.h>
#include "CAN.h"
#include "HAL_Gpio.h"
#include "semphr.h"
#include "queue.h"
#include "HAL_Uart.h"
#include <stdbool.h>
#include <stdio.h>

#define CAN_PINS (GPIO_Pin_11 | GPIO_Pin_12)

static uint8_t num_filters = 0;

// Must initialize gpio first to read charger line
void HAL_Can_init(void)
{
    num_filters = 0;

    // enable GPIOA and CAN peripherals
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN, ENABLE);
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);

    // setup gpio
    GPIO_InitTypeDef canGPIOinit; 
    canGPIOinit.GPIO_Pin = CAN_PINS;
    canGPIOinit.GPIO_Mode = GPIO_Mode_AF;
    canGPIOinit.GPIO_OType = GPIO_OType_PP;
    canGPIOinit.GPIO_Speed = GPIO_Speed_50MHz;
    canGPIOinit.GPIO_PuPd = GPIO_PuPd_NOPULL;
    GPIO_Init(GPIOA, &canGPIOinit);
    // use pins A11 and A12 for CAN tx/rx (different pins can be used as CAN)
    GPIO_PinAFConfig(GPIOA, GPIO_PinSource11, GPIO_AF_4);
    GPIO_PinAFConfig(GPIOA, GPIO_PinSource12, GPIO_AF_4);

    CAN_DeInit(CAN);  
    CAN_InitTypeDef canInit;
    CAN_StructInit(&canInit); //Fills in default values.
    canInit.CAN_Mode = CAN_Mode_Normal;
    canInit.CAN_TTCM = DISABLE;
    canInit.CAN_ABOM = DISABLE;
    canInit.CAN_AWUM = DISABLE;
    canInit.CAN_NART = DISABLE;
    canInit.CAN_RFLM = DISABLE;
    canInit.CAN_TXFP = DISABLE;
    // http://www.bittiming.can-wiki.info/
    // bxcan and 48mhz clock
    // 1000kbps = car baud rate => CAN_Prescaler = 12
    // 500kbps = charger baud rate => CAN_Prescaler = 6
    
    // 1000kbps
    int prescaler = 3;
    if (HAL_Gpio_read(GpioPin_CHARGER_AVAILABLE) == 1)
    {
        // 500 kpbs
        prescaler = 6;
    }
    canInit.CAN_Prescaler = prescaler;
    canInit.CAN_SJW = CAN_SJW_1tq;
    canInit.CAN_BS1 = CAN_BS1_13tq;
    canInit.CAN_BS2 = CAN_BS2_2tq;
    // CAN_ITConfig(CAN, CAN_IT_FMP0, 1);
    
    uint8_t ret = CAN_Init(CAN, &canInit);
    CAN->IER |= 0x3; //Enable interrupts for FIFO0 message pending and transmit mailbox empty


    // CAN_SlaveStartBank(1);
    HAL_Can_init_id_filter_16bit(0x9, 0x23, 0x69, 0x52);

    //Enable interrupts for recieve
    NVIC_InitTypeDef nvic_init;
    nvic_init.NVIC_IRQChannel = CEC_CAN_IRQn;
    nvic_init.NVIC_IRQChannelPriority = 2;
    nvic_init.NVIC_IRQChannelCmd = ENABLE;
    NVIC_EnableIRQ(CEC_CAN_IRQn);
    CAN_FIFORelease(CAN, CAN_FIFO0);
}

void HAL_Can_init_id_filter_32bit(uint32_t id)
{
    if(num_filters < 14)
    {
        CAN_FilterInitTypeDef filter;
        filter.CAN_FilterIdHigh = (uint16_t) ((id & 0xFFFF0000) >> 16);
        filter.CAN_FilterIdLow = (uint16_t) (id & 0xFFFF);
        filter.CAN_FilterMaskIdHigh = 0xFFFF;
        filter.CAN_FilterMaskIdLow = 0xFFFF;
        filter.CAN_FilterFIFOAssignment = CAN_Filter_FIFO0;
        filter.CAN_FilterNumber = num_filters;
        filter.CAN_FilterMode = CAN_FilterMode_IdList;
        filter.CAN_FilterScale = CAN_FilterScale_32bit;
        filter.CAN_FilterActivation = ENABLE;
         CAN_FilterInit(&filter);
        num_filters++;
    }
}

void HAL_Can_init_id_filter_16bit(uint16_t id1, uint16_t id2, uint16_t id3, uint16_t id4)
{
    if(num_filters < 14)
    {
        CAN_FilterInitTypeDef filter;
        filter.CAN_FilterIdHigh = id1 << 5;
        filter.CAN_FilterIdLow = id2 << 5;
        filter.CAN_FilterMaskIdHigh = id3 << 5;
        filter.CAN_FilterMaskIdLow = id4 << 5;
        filter.CAN_FilterFIFOAssignment = CAN_Filter_FIFO0;
        filter.CAN_FilterNumber = num_filters;
        filter.CAN_FilterMode = CAN_FilterMode_IdList;
        filter.CAN_FilterScale = CAN_FilterScale_16bit;
        filter.CAN_FilterActivation = ENABLE;
        CAN_FilterInit(&filter);
        num_filters++;
    }
}

Error_t HAL_Can_send_message(uint32_t id, int dlc, uint64_t data)
{
    CanTxMsg msg;
    msg.StdId = id;
    msg.ExtId = id;
    if (id > 0x7FF)
    { 
        msg.IDE = CAN_Id_Extended;
    }
    else
    {
        msg.IDE = CAN_Id_Standard;
    }
    msg.RTR = CAN_RTR_Data; //Not sure about this
    msg.DLC = dlc;

    if (dlc < 0)
        dlc = 0;
    else if (dlc > 8)
        dlc = 8;

    for (int i = 0; i < dlc; i++)
    {
        msg.Data[i] = (data >> (i*8)) & 0xff;
    }
    CAN_Transmit(CAN, &msg); 

    Error_t error;
    error.active = true;

    if (CAN_GetLastErrorCode(CAN) == 0)
    {
        error.active = false;
    }

    // return error;
    return error;
}

uint8_t HAL_number_of_empty_mailboxes(void)
{
    int emptyMailboxes = 0;
    if( CAN->TSR & (CAN_TSR_TME0))
    {
        emptyMailboxes++;
    }
    if( CAN->TSR & (CAN_TSR_TME1))
    {
        emptyMailboxes++;
    }
    if( CAN->TSR & (CAN_TSR_TME2))
    {
        emptyMailboxes++;
    }
    return emptyMailboxes;
}

void HAL_Can_IRQ_handler(void)
{
    if(CAN_GetITStatus(CAN, CAN_IT_FMP0) == SET)
    {
        //Get next message
        CanRxMsg RxMsg;
        CAN_Receive(CAN, CAN_FIFO0, &RxMsg);

        //Add message to queue
        CAN_add_message_rx_queue(RxMsg.StdId, RxMsg.DLC, RxMsg.Data);

        //Unhook can function through sephamore
        BaseType_t ret = pdFALSE;
        xSemaphoreGiveFromISR(can_message_recieved_semaphore, &ret);

        portYIELD_FROM_ISR( ret );
    }
    if(CAN_GetITStatus(CAN, CAN_IT_TME) == SET)
    {
        CAN_ClearITPendingBit(CAN, CAN_IT_TME);

        if(!CAN_is_transmit_queue_empty_fromISR())
        {
            BaseType_t ret = pdFALSE;
            xSemaphoreGiveFromISR(can_message_transmit_semaphore, &ret);  
            
            portYIELD_FROM_ISR( ret );
        }
    }
}