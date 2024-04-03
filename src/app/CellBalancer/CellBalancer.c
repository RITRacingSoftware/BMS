#include "common_macros.h"

#include "CellBalancer.h"
#include "ChargeMonitor.h"
#include "FaultManager.h"

// used to keep track of drain status.
static BatteryModel_t prev_model;

bool reading_allowed = false;

void CellBalancer_init(void)
{
    // no cells should be draining on startup
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        prev_model.cells[i].is_draining = false;
    }
}

static long bstimer;

void CellBalancer_stage_cell_draining(BatteryModel_t* bm)
{
    // keep track of per iteration drain failure detection
    bool drain_failure = false;

    bstimer++;

    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        int maxcell = ((bstimer/2) % (NUM_SERIES_CELLS+10));
        bm->cells[i].is_draining = (i < maxcell);
        //bm->cells[i].is_draining = (((bstimer / 50) % 2) == 0) && (i < 3);
    }

    // save off the new expected drain states
    prev_model = *bm;
}

bool CellBalancer_reading_allowed(void)
{
    return reading_allowed;
}