#ifndef HAL_SLAVECHIPS_H
#define HAL_SLAVECHIPS_H

#include <stdbool.h>
#include "BatteryModel.h"
#include "FaultManager.h"

// TODO- implement this

Error_t HAL_SlaveChips_get_all_cell_data(float* voltages, bool* is_draining, unsigned int num);

Error_t HAL_SlaveChips_get_all_tm_readings(float* temperatures, unsigned int num);

Error_t HAL_SlaveChips_request_cell_drain_state(bool* cells, unsigned int num);

#endif // HAL_SLAVECHIPS_H