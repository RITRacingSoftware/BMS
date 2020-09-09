// includes for mocking
#include "unity.h"

// module under test
#include "TaskWatchdog.h"

void test_TaskWatchdog_expired_if_not_pet(void)
{
    TaskWatchdog_init();

    // check that with no petting the task is marked expired
    // must update this test if we decide to use > 100 size buckets...
    bool tasks_expired[TaskId_NUM];
    for (int i = 0; i < TaskId_NUM; i++)
    {
        tasks_expired[i] = false;
    }

    for (int i = 0; i < 100; i++)
    {
        for (int task = 0; task < TaskId_NUM; task++)
        {
            tasks_expired[task] = TaskWatchdog_tick((TaskId_e)task);
        }
    }

    for (int i = 0; i < TaskId_NUM; i++)
    {
        TEST_ASSERT(tasks_expired[i] == true);
    }
}

void test_TaskWatchdog_not_expired_if_pet(void)
{
    TaskWatchdog_init();

    // check that with petting the task is NOT marked expired
    // must update this test if we decide to use > 100 size buckets...
    bool tasks_expired[TaskId_NUM];
    for (int i = 0; i < TaskId_NUM; i++)
    {
        tasks_expired[i] = false;
    }

    for (int i = 0; i < 100; i++)
    {
        for (int task = 0; task < TaskId_NUM; task++)
        {
            // shouldnt have to pet the watchdog each tick period, since
            // a task should be able to catch back up to TASK_BUCKET_MAX if locked up for a bit
            if (i % 2)
            {
                TaskWatchdog_pet((TaskId_e) task);
            }

            tasks_expired[task] = TaskWatchdog_tick((TaskId_e) task);
        }

        
    }

    for (int i = 0; i < TaskId_NUM; i++)
    {
        TEST_ASSERT(tasks_expired[i] == false);
    }
}
