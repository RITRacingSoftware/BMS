// Kernel includes.
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "semphr.h"
#ifdef SIMULATION
#include "BmsSimClient.h"
#endif

#include <stdio.h>

#include "HAL_Can.h"
#include "HAL_Gpio.h"
#include "HAL_CurrentSensor.h"
#include "HAL_EEPROM.h"
#include "HAL_Watchdog.h"

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
#include "TaskWatchdog.h"
#include "HAL_Watchdog.h"

#define TASK_1Hz_NAME "TASK_1Hz"
#define TASK_1Hz_PRIORITY (tskIDLE_PRIORITY + 1)
#define TASK_1Hz_PERIOD_MS (1000)
#define TASK_1Hz_STACK_SIZE_B (1000)
void TASK_1Hz(void *pvParameters)
{
    (void) pvParameters;
    TickType_t next_wake_time = xTaskGetTickCount();

    for (;;)
    {
        Periodic_1Hz();
        //Don't use watchdog if Disabled
        #ifndef DISABLE_WATCHDOG
            TaskWatchdog_pet(task_id_PERIODIC_1Hz);
        #endif
        // printf("Task 1Hz\n");
        // CAN_send_queued_messages();
        vTaskDelayUntil(&next_wake_time, TASK_1Hz_PERIOD_MS);
    }
}

#define TASK_10Hz_NAME "task_10Hz"
#define TASK_10Hz_PRIORITY (tskIDLE_PRIORITY + 1)
#define TASK_10Hz_PERIOD_MS (100)
#define TASK_10Hz_STACK_SIZE_B (1000)
void task_10Hz(void *pvParameters)
{
    (void) pvParameters;
    TickType_t next_wake_time = xTaskGetTickCount();
    for (;;)
    {
        Periodic_10Hz();
        //Don't use watchdog if Disabled
        #ifndef DISABLE_WATCHDOG
            TaskWatchdog_pet(task_id_PERIODIC_10Hz);
        #endif
        // printf("Task 10Hz\n");
        vTaskDelayUntil(&next_wake_time, TASK_10Hz_PERIOD_MS);
    }
}

#define TASK_1kHz_NAME "task_1kHz"
#define TASK_1kHz_PRIORITY (tskIDLE_PRIORITY + 1)
#define TASK_1kHz_PERIOD_MS (1)
#define TASK_1kHz_STACK_SIZE_B (1000)

void task_1kHz(void *pvParameters)
{
    (void) pvParameters;
    TickType_t next_wake_time = xTaskGetTickCount();
    for (;;)
    {
        Periodic_1kHz();
        //Don't use watchdog if Disabled
        #ifndef DISABLE_WATCHDOG
            TaskWatchdog_pet(task_id_PERIODIC_1kHz);
        #endif
        //printf("Task 1kHz\n");
        CAN_send_queued_messages();
        //Don't use watchdog if Disabled
        #ifndef DISABLE_WATCHDOG
            TaskWatchdog_pet(task_id_CAN);
        #endif
        vTaskDelayUntil(&next_wake_time, TASK_CAN_PERIOD_MS);
    }
}

#define WATCHDOG_TASK_NAME ((signed char *) "task_Watchdog")
#define WATCHDOG_TASK_STACK_SIZE (configMINIMAL_STACK_SIZE) //100
#define WATCHDOG_TASK_PERIOD (1)
#define WATCHDOG_TASK_PRIORITY (tskIDLE_PRIORITY + 3) //Not sure 
void watchdog_task(void *pvParameters)
{
    (void)pvParameters;
	TickType_t next_wake_time;
	for(;;)
	{
        //Don't use watchdog if Disabled
        #ifndef DISABLE_WATCHDOG
		if (!task_watchdog_expired())
		{
			pet();

			if (TaskWatchdog_tick(task_id_PERIODIC_1Hz))
			{
				task_watchdog_set_expired(task_id_PERIODIC_1Hz);
			}
			else if (TaskWatchdog_tick(task_id_PERIODIC_10Hz))
			{
				task_watchdog_set_expired(task_id_PERIODIC_10Hz);
			}
            else if (TaskWatchdog_tick(task_id_PERIODIC_1kHz))
			{
				task_watchdog_set_expired(task_id_PERIODIC_1kHz);
			}
            else if (TaskWatchdog_tick(task_id_CAN))
			{
				task_watchdog_set_expired(task_id_CAN);
			}
		}
        #endif

		vTaskDelayUntil(&next_wake_time, WATCHDOG_TASK_PERIOD);
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
    // initialize all HAL stuff
    HAL_Gpio_init();
    HAL_Can_init();
    HAL_CurrentSensor_init();
    // HAL_SlaveChips_init();
    // HAL_Watchdog_init();

    // initialize all app stuff
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
    
    xTaskCreate(watchdog_task,
        WATCHDOG_TASK_NAME,
        WATCHDOG_TASK_STACK_SIZE,
        NULL,
        WATCHDOG_TASK_PRIORITY,
        NULL);
    
    vTaskStartScheduler();

    // if we get here, ope
    for (;;);
}