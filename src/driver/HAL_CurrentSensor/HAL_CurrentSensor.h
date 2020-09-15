#ifndef HAL_CURRENT_SENSOR_H
#define HAL_CURRENT_SENSOR_H

#include "FaultManager.h"

// This header just exists for Mocks. TODO- implement this

Error_t HAL_CurrentSensor_read_current(float* current);

#endif