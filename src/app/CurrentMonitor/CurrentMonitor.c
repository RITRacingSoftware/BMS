#include <stdint.h>

#include "common_macros.h"
#include "counters.h"
#include "CurrentMonitor.h"
#include "FaultManager.h"

// number of seconds current has been over threshold
static int time_overcurrent_ms;

void CurrentMonitor_init(void)
{
    time_overcurrent_ms = 0;
}

void CurrentMonitor_1kHz(float current_A)
{
    if (FLOAT_GT_EQ(current_A, OVERCURRENT_A, CURRENT_TOLERANCE) || FLOAT_LT_EQ(current_A, OVERCURRENT_CHG_A, CURRENT_TOLERANCE))
    {
        if (incr_to_limit(&time_overcurrent_ms, OVERCURRENT_HYST_MS, 1))
        {
            FaultManager_set_fault_active(FaultCode_OVER_CURRENT, &current_A);
        }
    }
    else
    {
        // clear fault if the overcurrent condition has been gone
        // for the time hysteresis
        if (decr_to_limit(&time_overcurrent_ms, 0, 1))
        {
            FaultManager_clear_fault(FaultCode_OVER_CURRENT);
        }
    }
}
