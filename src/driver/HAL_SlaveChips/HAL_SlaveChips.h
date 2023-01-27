#ifndef HAL_SLAVECHIPS_H
#define HAL_SLAVECHIPS_H

#include <stdbool.h>
#include "BatteryModel.h"
#include "FaultManager.h"

void HAL_SlaveChips_init(void);

/**
 * Get cell voltage and drain states from all cells
 * voltages: array to be populated with cell voltages
 * is_draining: array to be populated with whether each cell is draining
 * num: number of cells to get info from
 */
Error_t HAL_SlaveChips_get_all_cell_data(float* voltages, bool* is_draining, unsigned int num);

/**
 * Get all the temperature readings from all of the chips
 * temperatures: pointer to an array to put the temperature readings in
 * vref2s: pointer to put the reference voltage value in
 * num: number of temperature readings needed (number of thermistors)
 */
Error_t HAL_SlaveChips_get_all_tm_readings(float* temperatures, float* vref2s, unsigned int num);

/**
 * Set the drain state for each cell (set whether each cell is draining or not)
 * cells: Pointer to an array with the drain state to set for each cell
 * num_cells_to_set: number of cells to set drain state for
 */
Error_t HAL_SlaveChips_request_cell_drain_state(bool* cells, unsigned int num_cells_to_set);

#endif // HAL_SLAVECHIPS_H