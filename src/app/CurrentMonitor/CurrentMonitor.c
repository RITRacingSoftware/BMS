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
    if ((current_A >= OVERCURRENT_A) || (current_A <= OVERCURRENT_CHG_A))
    {
        if (counter_incr(&time_overcurrent_ms, OVERCURRENT_HYST_MS))
        {
            char fault_data[ERROR_DATA_LEN];

            // convert float to incremental value for CAN
            uint32_t fault_current = (current_A  + 0.0005) / 0.001;
            STORE_BIG_ENDIAN(fault_data, fault_current, sizeof(uint32_t));
            FaultManager_set_fault_active(FaultCode_OVER_CURRENT, fault_data, true);
        }
    }
    else
    {
        // clear fault if the overcurrent condition has been gone
        // for the time hysteresis
        if (counter_decr(&time_overcurrent_ms, 0))
        {
            FaultManager_clear_fault(FaultCode_OVER_CURRENT);
        }
    }
}
