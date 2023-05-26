#ifndef LIMP_MODE_H
#define LIMP_MODE_H

#include "BatteryModel.h"
#include "TempModel.h"

typedef enum
{
    LimpModeLevel_NO_LIMP,
    LimpModeLevel_LEVEL_1,
    LimpModeLevel_LEVEL_2,
    LimpModeLevel_LEVEL_3,
    LimpModeLevel_LEVEL_4,
    LimpModeLevel_LEVEL_5,
} LimpModeLevel_e;

/**
 * This is to limit the current to when approaching our lowest allowed voltage or the
 * highest allowed temperature so that the car can drive for longer. 
*/

void LimpMode_init(void);

/**
 * This function returns the current limit based on the lowest cell voltage. This should 
 * only be lower than the maximum current when the lowest cell voltage is close to the
 * lower allowed limit.
 * battery_model: this is the battery model, which is used to know the lowest cell voltage
 * returns: the current limit
*/
double LimpMode_voltage_limit(BatteryModel_t *bm);

/**
 * This function returns the current limit based on the highest temperature. This should 
 * only be lower than the maximum current when the highest temperature is close to the
 * upper allowed limit.
 * battery_model: this is the battery model, which is used to know the lowest cell voltage
 * returns: the current limit
*/
double LimpMode_temperature_limit(TempModel_t *tm);

#endif // LIMP_MODE_H