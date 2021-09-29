#include "unity.h"
#include "f29BmsConfig.h"

// module under test
#include "CurrentLimiter.h"

#include "MockCurrentLimitCorrection.h"
#include "MockCurrentLimitCalculation.h"
#include "MockCAN.h"

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

/**
 * Test to make sure that the lower limit between the correction and calculated limit is used as the limit and
 * doesn't go below the minimum allowed current limit
 */
void test_CurrentLimiter_selectMinCurrent(void)
{
    BatteryModel_t bm;
    bm.smallest_V = CHARGED_CELL_V; //Shouldn't really matter, only used to pass to calculation and correction functions 

    can_bus.bms_current_limit.max_discharge_current = 0;
    
    float current_correction = MIN_ALLOWED_CURRENT_LIMIT + 100;
    float current_calculated = MIN_ALLOWED_CURRENT_LIMIT + 50;

    // Set return for calculated current limit below return for correction limit
    CurrentLimitCalculation_getCalculated_ReturnThruPtr_currentLimit(&current_calculated);
    CurrentLimitCorrection_getCorrection_ReturnThruPtr_currentLimit(&current_correction);

    //Make sure current limit set to the calculated current
    CurrentLimiter_10Hz(&bm);
    TEST_ASSERT_MESSAGE(can_bus.bms_current_limit.max_discharge_current == MIN_ALLOWED_CURRENT_LIMIT + 50, "Current limit not set to lower limit value (calculated).");

    //Change correction to lowet
    current_correction = MIN_ALLOWED_CURRENT_LIMIT + 25;
    CurrentLimitCorrection_getCorrection_ReturnThruPtr_currentLimit(&current_correction);

    //Make sure current limit set to the corrected current
    CurrentLimiter_10Hz(&bm);
    TEST_ASSERT_MESSAGE(can_bus.bms_current_limit.max_discharge_current == MIN_ALLOWED_CURRENT_LIMIT + 25, "Current limit not set to lower limit value (correction).");
    
    //Make sure limit doesn't go below the minimum allowed current limit
    current_calculated = MIN_ALLOWED_CURRENT_LIMIT - 5;
    CurrentLimiter_10Hz(&bm);
    TEST_ASSERT_MESSAGE(can_bus.bms_current_limit.max_discharge_current == MIN_ALLOWED_CURRENT_LIMIT, "Current limit set below minimum allowed current limit.");

    //Make sure limit doesn't go above the max allowed current limit
    current_calculated = MAX_ALLOWED_CURRENT_LIMIT + 5;
    current_correction = MAX_ALLOWED_CURRENT_LIMIT + 5;
    CurrentLimiter_10Hz(&bm);
    TEST_ASSERT_MESSAGE(can_bus.bms_current_limit.max_discharge_current == MAX_ALLOWED_CURRENT_LIMIT, "Current limit set above maximum allowed current limit.");

}