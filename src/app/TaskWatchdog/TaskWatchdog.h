#ifndef TASK_WATCHDOG_H
#define TASK_WATCHDOG_H

#include <stdbool.h>

#define NUM_TASKS 3

typedef enum {
    task_id_PERIODIC_1Hz,
    task_id_PERIODIC_10Hz,
    task_id_PERIODIC_1kHz,
    // task_id_CAN
} task_id_E;


void TaskWatchdog_init(void);

/*
 * Increment the task bucket for the given task.
 * task [in] - the given task
 */
void TaskWatchdog_pet(task_id_E task);

/*
 * Decrement the task bucket for the given task. Sets the task to expired if bucket reaches 0
 * Should decrement by less than TaskWatchdog_pet increments.
 * task [in] - the given task
 */
void TaskWatchdog_tick(task_id_E task);

bool TaskWatchdog_expired(void);


#endif // TASK_WATCHDOG_H

// #ifndef TASK_WATCHDOG_H
// #define TASK_WATCHDOG_H

// #include <stdbool.h>

// typedef enum {
//     TaskId_PERIODIC_1Hz,
//     TaskId_PERIODIC_10Hz,
//     TaskId_PERIODIC_100Hz,
//     TaskId_NUM
// } TaskId_e;

// void TaskWatchdog_init(void);

// /*
//  * Increment the task bucket for the given task.
//  * task [in] - the given task
//  */
// void TaskWatchdog_pet(TaskId_e task);

// /*
//  * Decrement the task bucket for the given task.
//  * Should decrement by less than TaskWatchdog_pet increments.
//  * task [in] - the given task
//  * return - true if task expired, false otherwise
//  */
// bool TaskWatchdog_tick(TaskId_e task);


// #endif // TASK_WATCHDOG_H