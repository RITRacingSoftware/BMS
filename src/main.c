// Kernel includes.
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "semphr.h"
#include "BmsSimClient.h"

#include <stdio.h>

#include "BatteryModel.h"
#include "BatteryCharacteristics.h"
#include "CAN.h"
#include "CellBalancer.h"
#include "ChargeMonitor.h"
#include "CurrentMonitor.h"
#include "CurrentSense.h"
#include "DriveMonitor.h"
#include "FaultManager.h"
#include "NTCALUG01T_LUT.h"
#include "PackMonitor.h"
#include "Periodic.h"
#include "SlaveInterface.h"
#include "SOCestimator.h"
#include "StatusLed.h"
#include "TempConverter.h"
#include "TempModel.h"

#define TASK_1Hz_NAME "TASK_1Hz"
#define TASK_1Hz_PRIORITY (tskIDLE_PRIORITY + 1)
#define TASK_1Hz_PERIOD_MS (1000)
#define TASK_1Hz_STACK_SIZE_B (configMINIMAL_STACK_SIZE)
void TASK_1Hz(void *pvParameters)
{
    (void) pvParameters;
    TickType_t next_wake_time;

    for (;;)
    {
        Periodic_1Hz();
        // printf("Task 1Hz\n");
        vTaskDelayUntil(&next_wake_time, TASK_1Hz_PERIOD_MS);
    }
}

#define TASK_10Hz_NAME "task_10Hz"
#define TASK_10Hz_PRIORITY (tskIDLE_PRIORITY + 2)
#define TASK_10Hz_PERIOD_MS (100)
#define TASK_10Hz_STACK_SIZE_B (configMINIMAL_STACK_SIZE)
void task_10Hz(void *pvParameters)
{
    (void) pvParameters;
    TickType_t next_wake_time;
    for (;;)
    {
        Periodic_10Hz();
        // printf("Task 10Hz\n");
        vTaskDelayUntil(&next_wake_time, TASK_10Hz_PERIOD_MS);
    }
}

#define TASK_1kHz_NAME "task_1kHz"
#define TASK_1kHz_PRIORITY (tskIDLE_PRIORITY + 3)
#define TASK_1kHz_PERIOD_MS (1)
#define TASK_1kHz_STACK_SIZE_B (configMINIMAL_STACK_SIZE)

void task_1kHz(void *pvParameters)
{
    (void) pvParameters;
    TickType_t next_wake_time;
    for (;;)
    {
        Periodic_1kHz();
        //printf("Task 1kHz\n");
        vTaskDelayUntil(&next_wake_time, TASK_1kHz_PERIOD_MS);
    }
}

#define TASK_CAN_NAME "task_CAN"
#define TASK_CAN_PRIORITY (tskIDLE_PRIORITY + 3) //Not sure about what priority to give
#define TASK_CAN_PERIOD_MS (1)                   //Need to determine correct period
#define TASK_CAN_STACK_SIZE_B (configMINIMAL_STACK_SIZE)
#define TICKS_TO_WAIT_FOR_RECIEVE (0) //Not sure if this is what we want

void task_CAN(void *pvParameters)
{
    // There are three transmit mailboxes
    (void)pvParameters;
    TickType_t next_wake_time;
    for (;;)
    {
        CAN_send_queued_messages();
        vTaskDelayUntil(&next_wake_time, TASK_CAN_PERIOD_MS);
    }
}

#ifdef SIMULATION
#include <signal.h>
#include <stdlib.h>
void signal_handler(int signo)
{
    if (signo == SIGHUP || signo == SIGINT)
    {
        BmsSimClient_close();
        exit(0);
    }
}
#endif


int main(int argc, char** argv)
{
    printf("Starting Sim\n");

    // initialize erything
    CAN_init();
    CellBalancer_init();
    ChargeMonitor_init();
    CurrentMonitor_init();
    CurrentSense_init();
    DriveMonitor_init();
    PackMonitor_init();
    Periodic_init();
    SOCestimator_init();
    FaultManager_init();
    StatusLed_init();
    //HAL_SlaveChip_Init(); //Not sure where it should be called
    TempConverter_init(NTCALUG01T_LUT, NTCALUG01T_LUT_LEN, NTCALUG01T_OFFSET, DIVIDER_OHM);

#ifdef SIMULATION
    if (BmsSimClient_init())
    {
        printf("Could not init bmssimclient\n");
        return -1;
    }

     signal(SIGHUP, signal_handler);
     signal(SIGINT, signal_handler);
#endif



    xTaskCreate(TASK_1Hz, 
        TASK_1Hz_NAME, 
        TASK_1Hz_STACK_SIZE_B,
        NULL,
        TASK_1Hz_PRIORITY,
        NULL);

    xTaskCreate(task_10Hz, 
        TASK_10Hz_NAME, 
        TASK_10Hz_STACK_SIZE_B,
        NULL,
        TASK_10Hz_PRIORITY,
        NULL);

    xTaskCreate(task_1kHz, 
        TASK_1kHz_NAME, 
        TASK_1kHz_STACK_SIZE_B,
        NULL,
        TASK_1kHz_PRIORITY,
        NULL);

    xTaskCreate(task_CAN, 
        TASK_CAN_NAME, 
        TASK_CAN_STACK_SIZE_B,
        NULL,
        TASK_CAN_PRIORITY,
        NULL);
    
    vTaskStartScheduler();

    // if we get here, ope
    for (;;);
}