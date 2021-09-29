#include "CurrentLimiter.h"
#include "f29BmsConfig.h"
#include "CurrentLimitCalculation.h"
#include "CurrentLimitCorrection.h"
#include "CAN.h"

void CurrentLimiter_10Hz(BatteryModel_t* bm)
{
    float smallestVoltage = bm->smallest_V; //limit current based on lowest cell
    float current;
    //Only calculate limit if the current reading is valid
    if(CurrentSense_get_current(&current))
    {
        double currentLimit;
        float currentLimitCorrection;
        float currentLimitCalculated;
        //Get both current limits
        CurrentLimitCorrection_getCorrection(&currentLimitCorrection, &smallestVoltage, &current);
        CurrentLimitCalculation_getCalculated(&currentLimitCalculated, &smallestVoltage, &current);
        //Set the lower limit as the limit
        if(currentLimitCalculated < currentLimitCorrection)
        {
            currentLimit = (double) currentLimitCalculated;
        }
        else
        {
            currentLimit = (double) currentLimitCorrection;
        }
        //Make sure current limit isn't below minimum allowed limit
        if(currentLimit < MIN_ALLOWED_CURRENT_LIMIT)
        {
            currentLimit = MIN_ALLOWED_CURRENT_LIMIT;
        }
        if(currentLimit > MAX_ALLOWED_CURRENT_LIMIT)
        {
            currentLimit = MAX_ALLOWED_CURRENT_LIMIT;
        }
        //Set the new limit
        can_bus.bms_current_limit.max_discharge_current = f29bms_dbc_current_limit_max_discharge_current_encode(currentLimit);
    }
}
