#ifndef CURRENT_SENSE_H
#define CURRENT_SENSE_H

#include <stdbool.h>

/**
* Module for processing raw current data and presenting a filtered current
* for application code to use.
*/

// LPF structured as y[n] = (x[n] + x[n-1]) * LPF_COEFF
#define CURRENT_SENSE_LPF_COEFF 0.5

/**
 * Reset internal filters.
 */
void CurrentSense_init(void);

/**
 * Periodic operations related to reading from the current sensor.
 * Filtering happens here.
 * To be executed once per second.
 */
void CurrentSense_1kHz(void);

/**
 * Get the latest filtered current measurement if one is available.
 * current_A [out] - destination for current reading in Amps
 * return True if the filtered data is ready, false otherwise.
 */ 
bool CurrentSense_get_current(float* current_A);

#endif // CURRENT_SENSE_H