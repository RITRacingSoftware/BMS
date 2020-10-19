#include <stdio.h>

#include "unity.h"

#include "common_macros.h"

#include "TempConverter.h"

// Simple LUT setup for testing
// linear interpolation should be easy to do by hand
// NTC with resistance varying from 20ohms to 10ohms as temperature goes from 100C to 110C
float test_lut[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10};
// only 11 values
int test_lut_len = 11;
// temperatures from 100 to 110
int test_lut_offset = 100;
// NTC in series with 10ohm resistor
int divider_ohm = 10;

void setUp(void)
{
    // use a simple LUT setup to make this easy to test
    TempConverter_init(test_lut, test_lut_len, test_lut_offset, divider_ohm);
}

/**
 * Verify a LUT index is successfully found.
 */
void test_TempConverter_at_index(void)
{
    // Test with a voltage at half of VCC.
    // A voltage at half of VCC indicates NTC resistance = divider resistance
    // And therefore the ntc resitance = 10, which is at index 10 of the LUT
    TempModel_t tm;
    tm.tm_readings_V[0] = MCU_VCC / 2;

    TempConverter_convert(&tm);
    const float expected_temp = 110;
    char err_msg[50];
    sprintf(err_msg, "Temperature was %.02f instead of expected %.02f\n", tm.temps_C[0], expected_temp);
    TEST_ASSERT_MESSAGE(tm.temps_C[0] == expected_temp, err_msg);
}

/**
 * Input a voltage that corresponds to a resistance that is in between temperature indicies in the LUT.
 * Verify the TempConverter module correctly linearly interpolates to find the right value.
 */
void test_TempConverter_linear_interpolate(void)
{
    // Test with a voltage that solves to 14.5 ohms for the NTC and therefore 105.5 deg C.
    TempModel_t tm;
    tm.tm_readings_V[0] = 1.34694;

    TempConverter_convert(&tm);
    const float expected_temp = 105.5;
    char err_msg[50];
    sprintf(err_msg, "Temperature was %.02f instead of expected %.02f \n", tm.temps_C[0], expected_temp);
    TEST_ASSERT_MESSAGE(ROUND_2D(tm.temps_C[0]) == ROUND_2D(expected_temp), err_msg);
}

/**
 * Verify that when given an out of bounds resistance higher than the higher bound, TempConverter caps it to the highest valid index's resistance.
 */
void test_TempConverter_upper_limit(void)
{
    // Test with a voltage that solves to 8 ohms for the NTC and should cap to 110C.
    TempModel_t tm;
    tm.tm_readings_V[0] = 1.83333;

    TempConverter_convert(&tm);
    const float expected_temp = 110;
    char err_msg[50];
    sprintf(err_msg, "Temperature was %.02f instead of expected %.02f \n", tm.temps_C[0], expected_temp);
    TEST_ASSERT_MESSAGE(tm.temps_C[0] == expected_temp, err_msg);
}

/**
 * Verify that when given an out of bounds resistance lower than the lower bound, TempConverter caps it to the lowest valid index's resistance.
 */
void test_TempConverter_lower_limit(void)
{
    // Test with a voltage that solves to 30 ohms for the NTC and should cap to 100C.
    TempModel_t tm;
    tm.tm_readings_V[0] = 0.825;

    TempConverter_convert(&tm);
    const float expected_temp = 120;
    char err_msg[50];
    sprintf(err_msg, "Temperature was %.02f instead of expected %.02f \n", tm.temps_C[0], expected_temp);
    TEST_ASSERT_MESSAGE(tm.temps_C[0] == expected_temp, err_msg);
}