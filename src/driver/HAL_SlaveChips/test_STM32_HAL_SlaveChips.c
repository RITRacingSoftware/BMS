#include "HAL_SlaveChips.h"
#include "HAL_Clock.h"
#include "stm32f0xx_gpio.h"

// #include "HAL_Uart.h"
#include <stdio.h>

#define HSI48_SOURCE 0x0C

#define LOAD_RESISTOR 16

int main()
{
        // enable HSI48 clock
    // RCC_HSI48Cmd(ENABLE);
    // // wait for HSI48 clock to be ready
    // while(!RCC_GetFlagStatus(RCC_FLAG_HSI48RDY));
    // // tell system clock (which CAN uses) to use HSI48 clock
    // RCC_SYSCLKConfig(RCC_SYSCLKSource_HSI48);
    // // wait for system clock to switch over to HSI48
    // while(RCC_GetSYSCLKSource() != HSI48_SOURCE);
    // // enable GPIOA and CAN peripherals
    // RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN, ENABLE);
    // RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
    HAL_Clock_init();

    HAL_Uart_init();

    HAL_SlaveChips_init();
    int num_ltcs = 2*6; //Number of LTC chips
    int num_boards = num_ltcs / 2; // note this only works for an even number of chips
    int num_cells = num_boards * 15;
    bool setIsDraining[num_cells]; 
    float voltages[num_cells];
    bool is_draining[num_cells];

    // // to set all on
    // // for (int i = 0; i < num_boards*15;i++)
    // // {
    // //     if (i % 2)
    // //     setIsDraining[i] = 1;
    // //     else
    // //     setIsDraining[i] = 0;
    // // }
    // // HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));
    // // for(;;);
    
    // for(int i = 0; i < num_boards*15; i++) setIsDraining[i] = 0;
    // for(;;)
    // {
    
    // for (int iter = 0; iter < num_boards* 15;iter++)
    // {

    //     //if (iter != 0) setIsDraining[iter-1] = 0;
    //     setIsDraining[iter] = 1;
    //            // HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));

    //     HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));
    //     for(int lol = 0; lol < 80000; lol++);
    // }
    // for (int iter = num_boards*15-1; iter >=0;iter--)
    // {

    //     //if (iter != 0) setIsDraining[iter-1] = 0;
    //     setIsDraining[iter] = 0;
    //     //HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));

    //     HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));
    //     for(int lol = 0; lol < 80000; lol++);
    // }

    // for (int i = 0; i < num_boards*15;i++)
    // {
    //     if (i % 2)
    //     setIsDraining[i] = 1;
    //     else
    //     setIsDraining[i] = 0;
    // }
    // HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));
    //         HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));

    //      for(int lol = 0; lol < 800000; lol++);
    //       for (int i = 0; i < num_boards*15;i++)
    // {
    //     if (i % 2)
    //     setIsDraining[i] = 0;
    //     else
    //     setIsDraining[i] = 1;
    // }
    // HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));
    //          HAL_SlaveChips_request_cell_drain_state(setIsDraining, sizeof(setIsDraining)/sizeof(setIsDraining[0]));

    //      for(int lol = 0; lol < 800000; lol++);
    //}
    
    // int cv[24];

    // for (int i = 0; i < 24; i++)
    // {
    //     cv[i] = (int)(cellVoltages[i] * 1000.0);
    // }
    
    // bool isDraining[num_ltcs * 12];
    // for (int i = 0; i< num_ltcs*12; i++)
    // {
    //     isDraining[i] = 0;
    // }

    // float cellVoltages[num_ltcs * 12];
    // HAL_SlaveChips_get_all_cell_data(&cellVoltages[0], isDraining, (num_ltcs*12));
    
    // float temps[(num_ltcs/2)*3];
    // HAL_SlaveChips_get_all_tm_readings(temps, 3);

    float internal_resistances[num_boards*15];

    for(int i = 0; i < num_boards*15; i++) setIsDraining[i] = 0;

    //cycle through all cells
    for(int i = 0; i < num_cells; i++)
    {
        //Meaure open circuit voltage
        HAL_SlaveChips_get_all_cell_data(voltages, is_draining, num_cells);
        float Voc = voltages[i];
        //Set to draining, wait for a little bit, and measure load voltage
        setIsDraining[i] = 1;
        HAL_SlaveChips_request_cell_drain_state(setIsDraining, num_cells);
        for(int lol = 0; lol < 80000; lol++);
        HAL_SlaveChips_get_all_cell_data(voltages, is_draining, num_cells);
        float Vload = voltages[i];
        float I = Vload / LOAD_RESISTOR;
        float Vinternal = Voc - Vload;
        float Rinternal = Vinternal / I;
        internal_resistances[i] = Rinternal;
        setIsDraining[i] = 0;
        HAL_SlaveChips_request_cell_drain_state(setIsDraining, num_cells);
    }
    
    // uint8_t print_buffer[50];
    // uint8_t n;
    // for(int i = 0; i < num_cells; i++)
    // {
    //     n = sprintf(print_buffer, "%f\n", internal_resistances[i]);
    //     HAL_Uart_send(&print_buffer[0], n);
    // }


    return 0;
}