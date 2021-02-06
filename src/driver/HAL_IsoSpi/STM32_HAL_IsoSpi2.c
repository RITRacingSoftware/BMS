#include "HAL_IsoSpi.h"

#include "stm32f0xx_spi.h"
#include "stm32f0xx.h"
#include "stm32f0xx_gpio.h"

#define ISOSPI_PINS 0xC0

void HAL_IsoSpi_Init()
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);
    RCC_AHBPeriphClockCmd();
    GPIO_PinAFConfig(GPIOA, ISOSPI_PINS, GPIO_MODE_AF);
    GPIO_InitTypeDef isospiGPIOinit = {CAN_PINS, GPIO_Mode_AF, GPIO_Speed_Level_3, GPIO_OType_PP, GPIO_PuPd_NOPULL}; //Not sure about speed, OType, and PuPd
    GPIO_Init(GPIOA, &isospiGPIOinit);
    SPI_InitTypeDef spiInit;
    SPI_StructInit(&spiInit); //Fills in default values
    //Need to change any not default settings
    SPI_Init(SPI1, &spiInit);
    SPI_RxFIFOThresholdConfig(SPI1, SPI_RxFIFOThreshold_HF); //Don't know if should be HF or QF
    SPI_cmd(SPI1, ENABLE);

}

Error_t HAL_IsoSpi_transmit_and_receive(PIN slave_select, char* tx, int tx_len, char* rx, int rx_len)
{
    Error_t error;
    error.active = false;
    for(int i = 0; i < tx_len; i++) //transmit data
    {
        if(SPI_GetTransmissionFIFOStatus(SPI1) == SPI_TransmissionFIFOStatus_Full)
        {
            error.active = true;
            return error;
        }
        SPI_SendData8(SPI1, tx[i]);
        
    }
    for(int i = 0; i < rx_len; i++) //recieve data
    {
        if(SPI_GetReceptionFIFOStatus(SPI1) == (SPI_ReceptionFIFOStatus_Empty || SPI_ReceptionFIFOStatus_Full)) //Nor sure if right
        {
            error.active = true;
            return error;
        }
        rx[i] = SPI_ReceiveData8(SPI1);
    }

}