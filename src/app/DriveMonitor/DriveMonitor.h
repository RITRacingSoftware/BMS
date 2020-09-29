#ifndef DRIVE_MONITOR_H
#define DRIVE_MONITOR_H

#include <stdbool.h>

/**
 * All logic for controlling the shutdown line based on active faults.
 * 
 * Some faults trigger shutdown if they are active for any amount of time,
 * others have a tolerance. Tolerance in this context is defined as a maximum amount of 
 * time that is acceptable for the fault to be active at a time.
 */

/**
 * Initialize fault tolerances and active fault timers.
 */
void DriveMonitor_init(void);

/**
 * Update active fault timers, shut down car if any expire.
 */
void DriveMonitor_1kHz(void);

/**
 * Return false if the shutdown line is active, true otherwise.
 */
bool DriveMonitor_is_driving_allowed(void);

#endif // DRIVE_MONITOR_H