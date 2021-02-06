#include "HAL_Spi.h"

#include "stm32f0xx_spi.h"
#include "stm32f0xx.h"
#include "stm32f0xx_gpio.h"

#define SPI_PINS 0xF00

void HAL_Spi_Init()
{
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE); //Using SPI 2
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);
    GPIO_PinAFConfig(GPIOB, SPI_PINS, GPIO_Mode_AF);
    GPIO_InitTypeDef spiGPIOinit = {SPI_PINS, GPIO_Mode_AF, GPIO_Speed_Level_3, GPIO_OType_PP, GPIO_PuPd_NOPULL}; //Not sure about speed, OType, and PuPd
    GPIO_Init(GPIOB, &spiGPIOinit);
    SPI_InitTypeDef spiInit;
    SPI_StructInit(&spiInit); //Fills in default values
    //Need to change any not default settings
    SPI_Init(SPI2, &spiInit);
    SPI_RxFIFOThresholdConfig(SPI2, SPI_RxFIFOThreshold_HF); //Don't know if should be HF or QF
    SPI_Cmd(SPI2, ENABLE);

}

Error_t HAL_Spi_transmit_and_receive(char* tx, int tx_len, char* rx, int rx_len)
{
    Error_t error;
    error.active = false;
    for(int i = 0; i < tx_len; i++) //transmit data
    {
        if(SPI_GetTransmissionFIFOStatus(SPI2) == SPI_TransmissionFIFOStatus_Full)
        {
            error.active = true;
            return error;
        }
        SPI_SendData8(SPI2, tx[i]);
        
    }
    for(int i = 0; i < rx_len; i++) //recieve data
    {
        if(SPI_GetReceptionFIFOStatus(SPI2) == (SPI_ReceptionFIFOStatus_Empty || SPI_ReceptionFIFOStatus_Full)) //Nor sure if right
        {
            error.active = true;
            return error;
        }
        rx[i] = SPI_ReceiveData8(SPI2);
    }
    return error;

}