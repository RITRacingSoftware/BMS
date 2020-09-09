#include "TaskWatchdog.h"

// leaky bucket for each task
int task_buckets[TaskId_NUM];

// Nominal operation that should be maintained in each bucket by its respective task
#define TASK_BUCKET_MAX 5

// How much a bucket gets incremented by a task pet
#define TASK_BUCKET_PET 2

// How much a bucket gets decremented by a task tick
#define TASK_BUCKET_TICK 1

void TaskWatchdog_init(void)
{
    for (int i = 0; i < TaskId_NUM; i++)
    {
        task_buckets[i] = TASK_BUCKET_MAX;
    }
}

void TaskWatchdog_pet(TaskId_e task)
{
    task_buckets[task] += TASK_BUCKET_PET;

    // cap bucket at max
    if (task_buckets[task] > TASK_BUCKET_MAX)
    {
        task_buckets[task] = TASK_BUCKET_MAX;
    }
}

/*
 * Decrement the task bucket for the given task.
 * Should decrement by less than TaskWatchdog_pet increments.
 * task [in] - the given task
 * return - true if task expired, false otherwise
 */
bool TaskWatchdog_tick(TaskId_e task)
{
    task_buckets[task] -= TASK_BUCKET_TICK;

    bool is_expired = false;
    if (task_buckets[task] <= 0)
    {
        is_expired = true;
    }

    return is_expired;
}