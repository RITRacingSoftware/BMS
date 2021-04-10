#include "HAL_Spi.h"

#include "stm32f0xx_spi.h"
#include "stm32f0xx.h"
#include "stm32f0xx_gpio.h"

#define SPI_MISO_PIN GPIO_Pin_14
#define SPI_MOSI_PIN GPIO_Pin_15
#define SPI_NSS_PIN GPIO_Pin_12
#define SPI_SCK_PIN GPIO_Pin_13


void HAL_Spi_init()
{
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE); //Using SPI 2
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);
   
    GPIO_InitTypeDef spiGPIOinit = {SPI_MISO_PIN, GPIO_Mode_AF, GPIO_Speed_Level_3, GPIO_OType_PP, GPIO_PuPd_NOPULL}; //Not sure about speed, OType, and PuPd
    GPIO_Init(GPIOB, &spiGPIOinit);
    GPIO_InitTypeDef spiGPIOinit1 = {SPI_MOSI_PIN, GPIO_Mode_AF, GPIO_Speed_Level_3, GPIO_OType_PP, GPIO_PuPd_NOPULL};
    GPIO_Init(GPIOB, &spiGPIOinit1);
    GPIO_InitTypeDef spiGPIOinit2 = {SPI_NSS_PIN, GPIO_Mode_OUT, GPIO_Speed_Level_3, GPIO_OType_PP, GPIO_PuPd_NOPULL};
    GPIO_Init(GPIOB, &spiGPIOinit2);
    GPIO_InitTypeDef spiGPIOinit3 = {SPI_SCK_PIN, GPIO_Mode_AF, GPIO_Speed_Level_3, GPIO_OType_PP, GPIO_PuPd_NOPULL};
    GPIO_Init(GPIOB, &spiGPIOinit3);

    GPIO_WriteBit(GPIOB, SPI_NSS_PIN, 1);
    //GPIO_PinAFConfig(GPIOB, 12, GPIO_AF_0);
    GPIO_PinAFConfig(GPIOB, 13, GPIO_AF_0);
    GPIO_PinAFConfig(GPIOB, 14, GPIO_AF_0);
    GPIO_PinAFConfig(GPIOB, 15, GPIO_AF_0);
    
    SPI_InitTypeDef spiInit;
    /* Initialize the SPI_Direction member */
    spiInit.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
    /* Init.lize the SPI_Mode member */
    spiInit.SPI_Mode = SPI_Mode_Master;
    /* Init.lize the SPI_DataSize member */
    spiInit.SPI_DataSize = SPI_DataSize_8b;
    /* Init.lize the SPI_CPOL member */
    spiInit.SPI_CPOL = SPI_CPOL_High;
    /* Init.lize the SPI_CPHA member */
    spiInit.SPI_CPHA = SPI_CPHA_2Edge;
    /* Init.lize the SPI_NSS member */
    spiInit.SPI_NSS = SPI_NSS_Soft;
    /* Init.lize the SPI_BaudRatePrescaler member */
    spiInit.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_128;
    /* Init.lize the SPI_FirstBit member */
    spiInit.SPI_FirstBit = SPI_FirstBit_MSB;
    /* Init.lize the SPI_CRCPolynomial member */
    spiInit.SPI_CRCPolynomial = 0; 
    SPI_I2S_DeInit(SPI2);

    SPI_Init(SPI2, &spiInit);
//     SPI2->CR1 = SPI_CR1_MSTR | SPI_CR1_BR | SPI_CR1_CPOL | SPI_CR1_CPHA; /* (1) */
// SPI2->CR2 = SPI_CR2_SSOE | SPI_CR2_RXNEIE | SPI_CR2_FRXTH
//  | SPI_CR2_DS_2 | SPI_CR2_DS_1 | SPI_CR2_DS_0; /* (2) */
// SPI2->CR1 |= SPI_CR1_SPE;
    SPI_RxFIFOThresholdConfig(SPI2, SPI_RxFIFOThreshold_HF); //Don't know if should be HF or QF
    SPI_Cmd(SPI2, ENABLE);

}

Error_t HAL_Spi_transmit_and_receive(char* tx, int tx_len, char* rx, int rx_len)
{
    Error_t error; //0x0 0x4 0x7 0xc2
    error.active = false;
    //GPIO_ResetBits(GPIOB, SPI_NSS_PIN);
    //GPIO_WriteBit(GPIOB, SPI_NSS_PIN, 0);
    // for(int i = 0; i < tx_len; i++) //transmit data
    // {
    //     if(SPI_GetTransmissionFIFOStatus(SPI2) == SPI_TransmissionFIFOStatus_Full)
    //     {
    //         error.active = true;
    //         return error;
    //     }
    //     SPI_SendData8(SPI2, tx[i]);
        
    // }
    // for(int i = 0; i < rx_len; i++) //recieve data
    // {

    //     if(SPI_GetReceptionFIFOStatus(SPI2) == (SPI_ReceptionFIFOStatus_Empty || SPI_ReceptionFIFOStatus_Full)) //Nor sure if right
    //     {
    //         error.active = true;
    //         return error;
    //     }
    //     rx[i] = SPI_ReceiveData8(SPI2);
        
    // }
        GPIO_WriteBit(GPIOB, SPI_NSS_PIN, 0);

    for (int i = 0; i < tx_len + rx_len; i++)
    {
        /* Wait for Tx empty */
        while (SPI_GetTransmissionFIFOStatus(SPI2) != SPI_TransmissionFIFOStatus_Empty); 
        
        /* Will inititiate 8-bit transmission if TXE */

        // "send" dummy data if done transmitting to get receive data
        char tosend = 0xFF;

        if (i < tx_len)
        {
            tosend = tx[i];
        }

        SPI_SendData8(SPI2, tosend);
        while(SPI_GetReceptionFIFOStatus(SPI2) == SPI_ReceptionFIFOStatus_Empty);

        if (i < tx_len)
        {
            // We are still transmitting
            // spi reads while we write so clear out the trash bytes
            // gcc please dont optimize this out
            char loser_byte_no_one_cares_about = SPI_ReceiveData8(SPI2);
        }
        else
        {
            rx[i - tx_len] = SPI_ReceiveData8(SPI2);
        }

    }
    // for (int i = 0; i < rx_len; i++)
    // {
    //     // clock out to let peripheral write
    //     //SPI_SendData8(SPI2, 0);
        
    //     // Wait for Rx data     
    //     while(SPI_GetReceptionFIFOStatus(SPI2) == SPI_ReceptionFIFOStatus_Empty);       
    //     rx[i] = SPI_ReceiveData8(SPI2);
    // }
    GPIO_WriteBit(GPIOB, SPI_NSS_PIN, 1);
    //GPIO_WriteBit(GPIOB, SPI_NSS_PIN, 1);
    return error;

}

