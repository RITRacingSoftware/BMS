#include "CurrentLimitCalculation.h"
#include "f29BmsConfig.h"

float internal_resistances[NUM_SERIES_CELLS];
float lastLowestVoltage = MAX_CELL_V;

void CurrentLimitCalculation_getCalculated(float *currentLimit, BatteryModel_t* bm, float *current)
{
    float lowestVoltage = bm->smallest_V;
    if(lowestVoltage != lastLowestVoltage)
    {
        //Find the cell index of lowest cell
        uint8_t lowestCell; //cell index of lowest cell
        for(uint8_t i = 0; i < NUM_SERIES_CELLS;i++)
        {
            if(lowestVoltage == bm->cells[i].voltage)
            {
                lowestCell = i;
                break;
            }
        }
        //Calculate current limit
        *currentLimit = ((lowestVoltage - CURRENT_LIMIT_THRESHOLD_V) / internal_resistances[lowestCell]) + *current;
    }
}