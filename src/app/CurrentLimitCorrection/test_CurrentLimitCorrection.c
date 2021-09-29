#include "unity.h"
#include "f29BmsConfig.h"

// module under test
#include "CurrentLimitCorrection.h"

/**
 * Test to make sure the current isn't limited above the threshold voltage
 */
void test_CurrentLimitCorrection_not_corrected(void)
{
    float current = 100;
    float current_limit = 125;
    BatteryModel_t bm;
    bm.smallest_V = MAX_ALLOWED_CELL_V;
    // initialize bm.average_V if using it here- currently unused
    
    // set most cells the same, only one with a massive difference
    for (float v = MAX_ALLOWED_CELL_V; v > CURRENT_LIMIT_THRESHOLD_V; v = v - 0.1)
    {
        bm.smallest_V = v;
        CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    }
    TEST_ASSERT_MESSAGE(current_limit == 125, "Current limit correction limited current before threshold voltage reached.");
}

/**
 * Test to make sure the current is limited at the threshold voltage
 */
void test_CurrentLimitCorrection_triggered(void)
{
    float current = 100;
    float current_limit = 125;
    BatteryModel_t bm;
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V-0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    TEST_ASSERT_MESSAGE(current_limit == (100-ACTIVE_CURRENT_CORRECTION_DECREASE_VALUE), "Current limit correction didn't correct current limit when under threshold voltage.");
}

/**
 * Test to make sure the current isn't limited multiple times without the voltage returning above the threshold voltage
 * but is after the current goes above and then back below the threshold voltage
 */
void test_CurrentLimitCorrection_triggered(void)
{
    float current = 100;
    float current_limit = 125;
    BatteryModel_t bm;
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V+0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V-0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    current = 80;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    current = 70;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V+0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    TEST_ASSERT_MESSAGE(current_limit == (100-ACTIVE_CURRENT_CORRECTION_DECREASE_VALUE), "Current limit correction decreased limit multiple times without the voltage returning above threshold.");
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V-0.1;
    current = 60;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    TEST_ASSERT_MESSAGE(current_limit == (60-ACTIVE_CURRENT_CORRECTION_DECREASE_VALUE), "Current limit correction didn't decreased after the voltage returned above threshold and then fell below.");
}

/**
 * Test to make sure the current isn't limited multiple times without the voltage returning above the threshold voltage
 * but is after the current goes above and then back below the threshold voltage
 */
void test_CurrentLimitCorrection_triggered(void)
{
    float current = 100;
    float current_limit = 125;
    BatteryModel_t bm;
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V+0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V-0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    current = 80;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    current = 70;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V+0.1;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    TEST_ASSERT_MESSAGE(current_limit == (100-ACTIVE_CURRENT_CORRECTION_DECREASE_VALUE), "Current limit correction decreased limit multiple times without the voltage returning above threshold.");
    bm.smallest_V = CURRENT_LIMIT_THRESHOLD_V-0.1;
    current = 60;
    CurrentLimitCorrection_getCorrection(&current_limit, &bm.smallest_V, &current);
    TEST_ASSERT_MESSAGE(current_limit == (60-ACTIVE_CURRENT_CORRECTION_DECREASE_VALUE), "Current limit correction didn't decreased after the voltage returned above threshold and then fell below.");
}