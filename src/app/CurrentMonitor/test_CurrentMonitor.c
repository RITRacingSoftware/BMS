#include "unity.h"
#include "f29BmsConfig.h"

// module under test
#include "CurrentMonitor.h"

// mocked modules
#include "MockFaultManager.h"

// runs before each test
void setUp(void)
{
    // reset the current history
    // dont want to start with an overcurrent timer counter != 0
    CurrentMonitor_init();
}

/**
 * Verify a fault is set if an overcurrent condition exists for the max allowable
 * amount of time.
 */
void test_CurrentMonitor_overcurrent(void)
{
    // make sure fault isnt set up until the overcurrent limit
    for (int i = 0; i < OVERCURRENT_HYST_MS - 1; i++)
    {
        CurrentMonitor_1kHz(OVERCURRENT_A + 1);
    }

    // last millisecond of the hysteresis at overcurrent should trigger fault
    FaultManager_set_fault_active_ExpectAnyArgs();
    CurrentMonitor_1kHz(OVERCURRENT_A + 1);
}

/**
 * Verify a fault is set if an overcurrent condition exists while charging for the max allowable
 * amount of time.
 */
void test_CurrentMonitor_chg_overcurrent(void)
{
    // make sure fault isnt set up until the overcurrent limit
    for (int i = 0; i < OVERCURRENT_HYST_MS - 1; i++)
    {
        CurrentMonitor_1kHz(OVERCURRENT_CHG_A - 1);
    }

    // last millisecond of the hysteresis at overcurrent should trigger fault
    FaultManager_set_fault_active_ExpectAnyArgs();
    CurrentMonitor_1kHz(OVERCURRENT_CHG_A - 1);
}

/**
 * Verify a fault is cleared if the overcurrent condition goes away for 
 * the hysteresis.
 */
void test_CurrentMonitor_clear_fault(void)
{
    // trigger overcurrent fault
    for (int i = 0; i < OVERCURRENT_HYST_MS; i++)
    {
        if (i == OVERCURRENT_HYST_MS - 1)
        {
            FaultManager_set_fault_active_ExpectAnyArgs();
        }
        CurrentMonitor_1kHz(OVERCURRENT_A + 1);
    }

    // tick down the timer at a nominal current
    for (int i = 0; i < OVERCURRENT_HYST_MS; i++)
    {
        // overcurrent fault only goes away once the system hasn't been running at an overcurrent
        // for the hysteresis.
        if (i == OVERCURRENT_HYST_MS - 1)
        {
            FaultManager_clear_fault_ExpectAnyArgs();
        }
        CurrentMonitor_1kHz(OVERCURRENT_A - 1);
    }
}