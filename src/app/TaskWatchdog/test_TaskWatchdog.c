// includes for mocking
#include "unity.h"

// module under test
#include "TaskWatchdog.h"

#include "MockCAN.h"

CAN_BUS can_bus;
//static task_id_E tasks[NUM_TASKS] = {task_id_PERIODIC_1Hz, task_id_PERIODIC_10Hz, task_id_PERIODIC_1kHz, task_id_CAN};

void test_TaskWatchdog_expired_if_not_pet(void)
{
    TaskWatchdog_init();

    // check that with no petting the task is marked expired
    // must update this test if we decide to use > 100 size buckets...
    bool tasks_expired[NUM_TASKS];
    for (int i = 0; i < NUM_TASKS; i++)
    {
        tasks_expired[i] = false;
    }

    for (int i = 0; i < 6000; i++)
    {
        for (int task = 0; task < NUM_TASKS; task++)
        {
            tasks_expired[task] = TaskWatchdog_tick(task_id_PERIODIC_10Hz);
        }
    }

    for (int i = 0; i < NUM_TASKS; i++)
    {
        TEST_ASSERT(tasks_expired[i] == true);
    }
}

void test_TaskWatchdog_not_expired_if_pet(void)
{
    TaskWatchdog_init();

    // check that with petting the task is NOT marked expired
    // must update this test if we decide to use > 100 size buckets...
    bool tasks_expired[NUM_TASKS];
    for (int i = 0; i < NUM_TASKS; i++)
    {
        tasks_expired[i] = false;
    }

    for (int i = 0; i < 100; i++)
    {
        for (int task = 0; task < NUM_TASKS; task++)
        {
            // shouldnt have to pet the watchdog each tick period, since
            // a task should be able to catch back up to TASK_BUCKET_MAX if locked up for a bit
            if (i % 2)
            {
                TaskWatchdog_pet((task_id_E) task);
            }

            tasks_expired[task] = TaskWatchdog_tick((task_id_E) task);
        }

        
    }

    for (int i = 0; i < NUM_TASKS; i++)
    {
        TEST_ASSERT(tasks_expired[i] == false);
    }
}