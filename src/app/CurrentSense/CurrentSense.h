#ifndef CURRENT_SENSE_H
#define CURRENT_SENSE_H

/**
* Interface for retrieving HV current readings.
*/

/**
 * Return the latest current measurement
 */ 
float CurrentSense_get_current(void);

#endif // CURRENT_SENSE_H