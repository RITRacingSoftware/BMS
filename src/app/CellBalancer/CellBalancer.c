#include "common_macros.h"

#include "CellBalancer.h"
#include "ChargeMonitor.h"
#include "FaultManager.h"

bool reading_allowed = true;

void CellBalancer_init(void)
{

}

void CellBalancer_stage_cell_draining(BatteryModel_t* bm)
{
    // keep track of per iteration drain failure detection
    bool drain_failure = false;

    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        // check if this cell should be draining and isn't (or vice versa)
        // drain feedback is currently not implemented
        /*if (bm->cells[i].drain_request != bm->cells[i].drain_feedback)
        {
            FaultManager_set_fault_active(FaultCode_DRAIN_FAILURE, &i);
            drain_failure = true;
        }*/
        
        if (ChargeMonitor_is_balancing_allowed())
        {
            float cell_diff_V = bm->cells[i].voltage - bm->smallest_V;
          // bm->cells[i].is_draining = true; 
            //start some cells draining
            if (cell_diff_V > DIFF_CORRECTION_THRESHOLD_V)
            {
                // cell voltage is too much higher than lowest, request drain
                bm->cells[i].drain_request = true;
            }
            else if (bm->cells[i].voltage >= CELL_FULL_MAX_V)
            {
                // cell is full or overfull, drain
                bm->cells[i].drain_request = true;
            }
            else
            {
                // stop some cells draining
                if (bm->cells[i].drain_request)
                {
                    if (bm->cells[i].voltage < CELL_FULL_MIN_V)
                    {
                        bm->cells[i].drain_request = false;
                    }
                }
                else
                {
                    bm->cells[i].drain_request = false;
                }
            }

            // Only read cells while not balancing, to get open-circuit voltage
            reading_allowed = false;
        }
        else
        {
            bm->cells[i].drain_request = false;
            reading_allowed = true;
        }
    }

    if (drain_failure == false)
    {
        FaultManager_clear_fault(FaultCode_DRAIN_FAILURE);
    }
}

bool CellBalancer_reading_allowed(void)
{
    return reading_allowed;
}