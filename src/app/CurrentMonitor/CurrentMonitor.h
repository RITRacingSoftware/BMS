#ifndef CURRENT_MONITOR_H
#define CURRENT_MONITOR_H

/**
 * Checks current for errors. Triggers faults using the FaultManager when 
 * errors are present.
 * 
 * Error checking is done using a time hysteresis.
 * This means in order for an overcurrent fault to be set, the current must be
 * held at an overcurrent value for the hysteresis.
 * This also means in order for an overcurrent fault to be cleared, the current 
 * must stay at a nominal value for the hysteresis.
 * 
 * This implementation prevents the overcurrent fault from changing at a high frequency.
 * 
 * Note: the hysteresis uses a counter that increments when an overcurrent value is 
 * received and decrements when a non-overcurrent value is read. This means that 
 * overcurrent values interspersed with non-overcurrent values will result in a fault
 * if the overcurrent values are more frequent than the non-overrcurrent values.
 * 
 * See implementation for details.
 */

/**
 * Clear current history.
 */
void CurrentMonitor_init(void);

/**
 * Check current for sustained values above overcurrent threshold.
 * current_A [in] - latest current reading. All filtering should be done at this point.
 */
void CurrentMonitor_1kHz(float current_A);

#endif // CURRENT_MONITOR_H