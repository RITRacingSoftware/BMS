#include "CurrentSense.h"
#include "HAL_CurrentSensor.h"
#include "FaultManager.h"

float CurrentSense_get_current(void)
{
    float latest_current; 
    Fault_t sensor_fault = HAL_CurrentSensor_read_current(&latest_current);

    if (sensor_fault.code != NO_FAULT)
    {
        FaultManager_set_fault_active(sensor_fault, false);
    }

    return latest_current;
}