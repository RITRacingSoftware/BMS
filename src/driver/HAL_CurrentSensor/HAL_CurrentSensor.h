#ifndef HAL_CURRENT_SENSOR_H
#define HAL_CURRENT_SENSOR_H

#include "FaultManager.h"

Fault_t HAL_CurrentSensor_read_current(float* current);

#endif