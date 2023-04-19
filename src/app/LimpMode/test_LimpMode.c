#include "LimpMode.h"

#include "MockCAN.h"

#include "f29BmsConfig.h"

// need to define this here since CMock isn't smart enough to define it in MockCAN.h
CAN_BUS can_bus;

void setUp(void)
{
    LimpMode_init();
}

void test_LimpMode_Voltage(void)
{
    BatteryModel_t bm;
    bm.smallest_V = LIMP_MODE_VOLTAGE_LEVEL_1 + 0.1;

    double current_limit = LimpMode_voltage_limit(&bm);

    char err_msg[50];
    sprintf(err_msg, "Current limited when above level 1 voltage threshold");
    TEST_ASSERT_MESSAGE(current_limit == OVERCURRENT_A, err_msg);

    bm.smallest_V = LIMP_MODE_VOLTAGE_LEVEL_1 - 0.05;
    double current_limit = LimpMode_voltage_limit(&bm);

    char err_msg[50];
    sprintf(err_msg, "Current not limited to level 1 voltage threshold");
    TEST_ASSERT_MESSAGE(current_limit == LIMP_MODE_LEVEL_1, err_msg);

    bm.smallest_V = LIMP_MODE_VOLTAGE_LEVEL_2 - 0.05;
    double current_limit = LimpMode_voltage_limit(&bm);

    char err_msg[50];
    sprintf(err_msg, "Current not limited to level 2 voltage threshold");
    TEST_ASSERT_MESSAGE(current_limit == LIMP_MODE_LEVEL_2, err_msg);

    bm.smallest_V = LIMP_MODE_VOLTAGE_LEVEL_3 - 0.05;
    double current_limit = LimpMode_voltage_limit(&bm);

    char err_msg[50];
    sprintf(err_msg, "Current not limited to level 3 voltage threshold");
    TEST_ASSERT_MESSAGE(current_limit == LIMP_MODE_LEVEL_3, err_msg);

}

void test_LimpMode_Temp(void)
{
    TempModel_t tm;
    for(uint8_t i = 0; i < NUM_THERMISTOR; i++)
    {
        tm.temps_C[i] = 25;
    }
    tm.temps_C[1] = LIMP_MODE_TEMP_LEVEL_1 - 1;

    double current_limit = LimpMode_temperature_limit(&tm);

    char err_msg[50];
    sprintf(err_msg, "Current limited when below level 1 temp threshold");
    TEST_ASSERT_MESSAGE(current_limit == OVERCURRENT_A, err_msg);

    tm.temps_C[1] = LIMP_MODE_TEMP_LEVEL_1 + 1;
    double current_limit =  LimpMode_temperature_limit(&tm);

    char err_msg[50];
    sprintf(err_msg, "Current not limited to level 1 temp threshold");
    TEST_ASSERT_MESSAGE(current_limit == LIMP_MODE_LEVEL_1, err_msg);

    tm.temps_C[1] = LIMP_MODE_TEMP_LEVEL_2 + 1;
    double current_limit =  LimpMode_temperature_limit(&tm);

    char err_msg[50];
    sprintf(err_msg, "Current not limited to level 2 temp threshold");
    TEST_ASSERT_MESSAGE(current_limit == LIMP_MODE_LEVEL_2, err_msg);

    tm.temps_C[1] = LIMP_MODE_TEMP_LEVEL_3 + 1;
    double current_limit = LimpMode_voltage_limit(&bm);

    char err_msg[50];
    sprintf(err_msg, "Current not limited to level 3 temp threshold");
    TEST_ASSERT_MESSAGE(current_limit == LIMP_MODE_LEVEL_3, err_msg);

}

