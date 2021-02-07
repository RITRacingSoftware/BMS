#ifndef BATTERY_CHARACTERISTICS_H
#define BATTERY_CHARACTERISTICS_H

// NOTE: Be sure to define things here with decimals if you intend to use them as floats

#define CELL_CAPACITY_Ah 6.550
#define BATTERY_CAPACITY_Ah (((float) NUM_PARALLEL_CELLS) * CELL_CAPACITY_Ah)

// todo - actually define these
#define MAX_CELL_V 4.3
#define MAX_ALLOWED_CELL_V 4.1
#define CHARGED_CELL_V 4.0
#define MIN_ALLOWED_CELL_V 1.2
#define MIN_CELL_V 0.0
#define MAX_CHARGING_CURRENT_A 100.0
#define MAX_CHARGING_V 5
#define CHARGE_CURRENT_SETTLE_TIME_S 5

// The amount two cell voltages must differ by to be considered different
#define VOLTAGE_TOLERANCE 0.001

// maxmimum expected difference in cell voltages
#define MAX_CELL_DIFF_V 0.5
#define DIFF_CORRECTION_THRESHOLD_V 0.3

#define NUM_TEMP_RANGES 5

// columns: maximum SOC
// rows: average voltage of series cell
// example: row 0 col 0 means a voltage of 4.0V indicates the battery is at no more than 75% SOC when its <= 5 deg C
// each index is 0-10 deg C
static float temp_lut_V[NUM_TEMP_RANGES][3] = 
{//  75%  50%  25%
    {4.0, 3.8, 3.7}, //       t <= 5C
    {3.8, 3.7, 3.6}, //  5C < t <= 15C
    {3.8, 3.6, 3.5}, // 15C < t <= 25C
    {3.8, 3.5, 3.4}, // 25C < t <= 35C
    {3.5, 3.4, 3.3}  //       t > 35C
};

#define SOC_75_LIMIT_FOR_TEMP_INDEX(temp_index) temp_lut_V[temp_index][0]
#define SOC_50_LIMIT_FOR_TEMP_INDEX(temp_index) temp_lut_V[temp_index][1]
#define SOC_25_LIMIT_FOR_TEMP_INDEX(temp_index) temp_lut_V[temp_index][2]

#endif // BATTERY_CHARACTERISTICS_H