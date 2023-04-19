#ifndef CURRENT_LIMITER_H
#define CURRENT_LIMITER_H

#include "f29BmsConfig.h"
#include "BatteryModel.h"
#include "TempModel.h"

/**
 * This module calculates the maximum current to keep the power from the accumulator under the rules limit
*/


/**
 * Initialize the current limitation.
 */
void CurrentLimiter_init(void);

/**
 * Performs the current limit calculation
*/
void CurrentLimiter_10Hz(BatteryModel_t* bm, TempModel_t *tm);

#endif // CURRENT_LIMITER_H