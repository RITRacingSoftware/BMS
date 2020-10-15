#ifndef PERIODIC_H
#define PERIODIC_H

/**
 * Initialize global models.
 */
void Periodic_init(void);

/**
 * Executes all functions that require being executed once per second.
 */
void Periodic_1Hz(void);

/**
 * Executes all functions that require being executed 10 times per second.
 */
void Periodic_10Hz(void);

/**
 * Executes all functions that require being executed 1000 times per second.
 */

void Periodic_1kHz(void);

#endif // PERIODIC_H