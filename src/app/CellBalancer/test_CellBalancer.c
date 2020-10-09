#include "unity.h"

#include "CellBalancer.h"

#include "MockFaultManager.h"

void setUp(void)
{
    CellBalancer_init();
}

/**
 * Verify that the CellBalancer correctly faults if a cell fails to balance.
 */
void test_CellBalancer_drain_failure(void)
{
    BatteryModel_t bm;
    bm.largest_V = MAX_CELL_V;
    bm.smallest_V = MIN_ALLOWED_CELL_V;
    // initialize bm.average_V if using it here- currently unused
    
    // set most cells the same, only one with a massive difference
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        if (i == 0)
        {
            bm.cells[i].voltage = MAX_CELL_V;
        }
        else
        {
            bm.cells[i].voltage = MIN_ALLOWED_CELL_V;
        }

        bm.cells[i].is_draining = false;
    }

    // this iteration should trigger draining
    // drain states start false so no faults should be set
    FaultManager_clear_fault_ExpectAnyArgs();
    CellBalancer_stage_cell_draining(&bm);

    TEST_ASSERT_MESSAGE(bm.cells[0].is_draining == true, "Cell balancer failed to trigger drain.");

    // simulate a failed drain
    bm.cells[0].is_draining = false;
    
    FaultManager_set_fault_active_ExpectAnyArgs();
    CellBalancer_stage_cell_draining(&bm);

    // should still stage draining
    TEST_ASSERT_MESSAGE(bm.cells[0].is_draining == true, "Cell balancer failed to trigger drain when faulted.");
}