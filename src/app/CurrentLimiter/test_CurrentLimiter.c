#include "unity.h"
#include "f29BmsConfig.h"

// module under test
#include "CurrentLimiter.h"

#include "MockCAN.h"

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

/**
 * Test to make sure the current limit is calculated correctly
*/
void test_CurrentLimiter_current_limit(void)
{   
    CurrentLimiter_init();

    BatteryModel_t bm;
    bm.total_V = 375.0;

    float min_power_limit = MAX_POWER_LIMIT_KW-10; // The current limit shouldn't ever be such that the max power is below this

    CurrentLimiter_10Hz(&bm);

    float max_allowed_current = MAX_POWER_LIMIT_KW / bm.total_V;
    float min_current_limit = min_power_limit / bm.total_V;
    char err_msg[150];
    sprintf(err_msg, "Current limit set above maximum allowed power limit at %fV.(%fA)", bm.total_V, f29bms_dbc_bms_current_limit_bms_max_discharge_current_decode(can_bus.bms_current_limit.bms_max_discharge_current));
    TEST_ASSERT_MESSAGE(f29bms_dbc_bms_current_limit_bms_max_discharge_current_decode(can_bus.bms_current_limit.d1_max_discharge_current) <= max_allowed_current, err_msg);
    TEST_ASSERT_MESSAGE(f29bms_dbc_bms_current_limit_bms_max_discharge_current_decode(can_bus.bms_current_limit.d1_max_discharge_current) >= min_power_limit, err_msg);

    bm.total_V = 321.0123;

    CurrentLimiter_10Hz(&bm);

    max_allowed_current = MAX_POWER_LIMIT_KW / bm.total_V;
    min_current_limit = min_power_limit / bm.total_V;
    sprintf(err_msg, "Current limit set above maximum allowed power limit at %fV.(%fA)", bm.total_V, f29bms_dbc_bms_current_limit_bms_max_discharge_current_decode(can_bus.bms_current_limit.bms_max_discharge_current));
    TEST_ASSERT_MESSAGE(f29bms_dbc_bms_current_limit_bms_max_discharge_current_decode(can_bus.bms_current_limit.d1_max_discharge_current) <= max_allowed_current, err_msg);
    TEST_ASSERT_MESSAGE(f29bms_dbc_bms_current_limit_bms_max_discharge_current_decode(can_bus.bms_current_limit.d1_max_discharge_current) >= min_power_limit, err_msg);


}