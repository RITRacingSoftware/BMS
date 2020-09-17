#ifndef SLAVE_INTERFACE_H
#define SLAVE_INTERFACE_H

#include "BatteryModel.h"
#include "TempModel.h"

/**
 * Get the latest voltage and draining information from the slave chips.
 * Set faults if communication errors occur.
 * battery_model [out] - destination for updated cell info
 */
void SlaveInterface_read_cell_info(BatteryModel_t* battery_model);

/**
 * Get the latest temperature data for the battery pack.
 * temp_model [out] - destination for updated temperature info
 */
void SlaveInterface_read_temperature_info(TempModel_t* temp_model);

/**
 * Tell the slave chips to stop/start draining each series cell.
 * battery_model [in] - contains a desired drain state (True or False) for each series cell
 */
void SlaveInterface_request_cell_draining(BatteryModel_t* battery_model);

#endif // SLAVE_INTERFACE_H