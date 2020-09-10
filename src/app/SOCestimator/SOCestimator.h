#ifndef SOC_ESTIMATOR_H
#define SOC_ESTIMATOR_H

#include "BatteryModel.h"

/**
 * SOC(State Of Charge) is calculated in two ways:
 * 
 * Coulomb counting: provides a less accurate but more granular current measurement
 * Voltage thresholds: provides a more accurate but much less granular way to check the coulomb counting method.
 */

/**
 * Initialize coulomb counting at 100% SOC and begin waiting on an average voltage reading to begin
 * the coulomb counting with a starting point.
 */
void SOCestimator_init(void);

/**
 * Use the instantaneous current to update the coulomb counting SOC model.
 * current [in] - the instantaneous current
 */
void SOCestimator_coulomb_count_update_1kHz(float current_A);

/**
 * Calculate the average voltage of the battery cells. Limit the SOC measurement to
 * the highest SOC possible at this voltage.
 * battery_model [in] - new cell voltages to use in calculating the SOC
 */
void SOCestimator_voltage_threshold_update_10Hz(BatteryModel_t* battery_model, float ambient_temp_C);

/**
 * Get the SOC as calculated by coulomb counting without voltage threshold limit.
 * return int [0:100]
 */
float SOCestimator_get_soc_raw(void);

/**
 * Get the SOC as calculated by coulomb counting with the voltage threshold limit applied.
 * return int [0:100]
 */
float SOCestimator_get_soc_corrected(void);


/**
 * Write the latest corrected SOC reading to eeprom for use on next startup.
 */
void SOCestimator_save_soc(void);

#endif // SOC_ESTIMATOR_H
