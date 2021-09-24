#include "CurrentLimitCorrection.h"
#include "f29BmsConfig.h"

float lastCurrentLimit = CURRENT_IRRATIONAL_A;
bool lastVoltageLow = false; //True if the current limit was already decreased, used for hysteresis
uint16_t numTimesLimited = 0;

void CurrentLimitCorrection_getCorrection(float *currentLimit, float *lowestVoltage, float *current)
{
    //Check if voltage is below threshold and reduce current limit
    if((*lowestVoltage < CURRENT_LIMIT_THRESHOLD_V) && (*lowestVoltage > MIN_CELL_V))
    {
        //Don't decrease current limit again if it has already been decresed and the voltage hasn't increased above the threshold voltage
        if(!lastVoltageLow)
        {
            *currentLimit = *current - ACTIVE_CURRENT_CORRECTION_DECREASE_VALUE;
            lastVoltageLow = true;
            numTimesLimited++;
            //SEND CAN MESSAGE
        }
        else
        {
            *currentLimit = lastCurrentLimit;
        }    
    }
    else
    {
        *currentLimit = lastCurrentLimit;
        lastVoltageLow = false;
    }
}