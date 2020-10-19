#include "CellBalancer.h"
#include "ChargeMonitor.h"
#include "FaultManager.h"

// used to keep track of drain status.
static BatteryModel_t prev_model;

void CellBalancer_init(void)
{
    // no cells should be draining on startup
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        prev_model.cells[i].is_draining = false;
    }
}

void CellBalancer_stage_cell_draining(BatteryModel_t* bm)
{
    // keep track of per iteration drain failure detection
    bool drain_failure = false;

    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        // check if this cell should be draining and isnt
        if (bm->cells[i].is_draining != prev_model.cells[i].is_draining)
        {
            FaultManager_set_fault_active(FaultCode_DRAIN_FAILURE, &i);
            drain_failure = true;
        }

        float cell_diff_V = bm->cells[i].voltage > bm->smallest_V;
        if (cell_diff_V > DIFF_CORRECTION_THRESHOLD_V)
        {
            // cell is falling behind, request drain
            bm->cells[i].is_draining = true;
        }
        else if (ChargeMonitor_charger_available() && (bm->cells[i].voltage >= MAX_ALLOWED_CELL_V))
        {
            // charging is supposed to happen, but this cell needs to be drained first
            bm->cells[i].is_draining = true;
        }
        else
        {
            // request draining shut off
            bm->cells[i].is_draining = false;
        }
    }

    if (drain_failure == false)
    {
        FaultManager_clear_fault(FaultCode_DRAIN_FAILURE);
    }

    // save off the new expected drain states
    prev_model = *bm;
}