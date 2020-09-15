#include "CurrentSense.h"
#include "HAL_CurrentSensor.h"
#include "FaultManager.h"

float CurrentSense_get_current(void)
{
    float latest_current; 
    Error_t err = HAL_CurrentSensor_read_current(&latest_current);

    if (err.active)
    {
        FaultManager_set_fault_active(FaultCode_CURRENT_SENSOR_COMM, err.data, false);
    }
    else
    {
        FaultManager_clear_fault(FaultCode_CURRENT_SENSOR_COMM);
    }

    return latest_current;
}