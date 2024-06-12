#ifndef F29BMSCONFIG_H
#define F29BMSCONFIG_H

#include "FaultManager.h"

/**
 * Cells
 */

// NOTE: If you change these things, you will very likely need to change CAN.c to match
#define NUM_BOARDS 4
#define NUM_CHIPS (NUM_BOARDS*2)
#define NUM_CELLS_PER_BOARD 19
#define NUM_THERMISTORS_PER_CHIP 4
#define NUM_SERIES_CELLS (NUM_BOARDS * NUM_CELLS_PER_BOARD)
#define NUM_PARALLEL_CELLS 1

// NOTE: Be sure to define things here with decimals if you intend to use them as floats

#define CELL_CAPACITY_Ah 10.000
#define BATTERY_CAPACITY_Ah (((float) NUM_PARALLEL_CELLS) * CELL_CAPACITY_Ah)


// Battery voltage constants
#define CELL_IRRATIONAL_LOW_V  2.0   // cells below this are considered irrational
#define CELL_MIN_V             3.002 // cells below this are considered empty, and we throw an out of juice fault
#define CELL_FULL_MIN_V        4.148 // } cells in this range are considered fully charged. if all are in this range, stop charging
#define CELL_FULL_MAX_V        4.198 // } cells above this are considered overcharged, and we should discharge
#define CELL_IRRATIONAL_HIGH_V 4.5   // cells above this are considered irrational

#define BALANCING_MEASURE_INTERVAL_S 30 // how long to wait in between measuring cell voltages when balancing

// Simply transmitted to the charger.
// These are NOT the overcurrent limits. See later in this document for those.
#define MAX_CHARGING_CURRENT_A 15
#define MAX_CHARGING_V ((float) CELL_FULL_MAX_V * (float)NUM_SERIES_CELLS)
#define CHARGE_CURRENT_SETTLE_TIME_S 30

// The amount two cell voltages must differ by to be considered different
#define VOLTAGE_TOLERANCE 0.001


#define MAX_CELL_DIFF_V 0.5             // maximimum expected difference in cell voltages. above this, we throw a voltage diff fault
#define DIFF_CORRECTION_THRESHOLD_V 0.3 // if difference is above this while charging, start balancing

// how long a voltage fault condition must be present to trigger a fault
#define VOLTAGE_FAULT_HYSTERESIS_MS 500

/**
 * Current Monitoring
 */

#define CURRENT_IRRATIONAL_A 500
#define OVERCURRENT_A 350
#define OVERCURRENT_CHG_A -41
#define OVERCURRENT_HYST_MS 5
#define CURRENT_TOLERANCE 0.01
#define CURRENT_REJECTION_THRESHOLD_A 2.0


/**
 * Current Sensor
 */
#define ADC_MAX_VALUE 4096.0
#define ADC_VREF 3.33

#define CURRENT_SENSOR_GPIO_PORT GPIOA
#define CURRENT_SENSOR_GPIO_PIN GPIO_Pin_0
#define CURRENT_SENSOR_ADC_CHANNEL ADC_CHSELR_CHSEL0
#define CURRENT_SENSOR_VOLTAGE_DIVIDER (5.0/3.3)
#define CURRENT_SENSOR_SENSITIVITY 0.004
#define CURRENT_SENSOR_OFFSET_V 2.5

/**
 * Faults
 */
// any bits set in this won't get set in the fault vector
//#define DISABLE_FAULT_MASK ((1 << FaultCode_SLAVE_COMM_TEMPS) | (1 << FaultCode_CELL_VOLTAGE_IRRATIONAL) | (1 << FaultCode_TEMPERATURE_IRRATIONAL) | (1 << FaultCode_OVER_TEMPERATURE))
#define DISABLE_FAULT_MASK (FaultCode_DRAIN_FAILURE ) // RE-ENABLE SETTING OVER CURRENT FAULT

// Fault tolerances are the times a fault is allowed to be continuously active before triggering a shutdown event
// value a fault tolerance should have if the fault does not cause the car to shutdown
#define NO_SHUTDOWN -1

#define SLAVE_COMM_CELLS_TOLERANCE_MS 10000
#define SLAVE_COMM_TEMPS_TOLERANCE_MS 10000
#define SLAVE_COMM_DRAIN_REQUEST_TOLERANCE_MS 10000 // not implemented
#define CURRENT_SENSOR_COMM_TOLERANCE_MS 10 // not implemented?
#define OVER_CURRENT_TOLERANCE_MS 1
#define CELL_VOLTAGE_IRRATIONAL_TOLERANCE_MS 10000
#define CELL_VOLTAGE_DIFF_TOLERANCE_MS NO_SHUTDOWN
#define OUT_OF_JUICE_TOLERANCE_MS 1
#define OVER_TEMPERATURE_TOLERANCE_MS 1
#define TEMPERATURE_IRRATIONAL_TOLERANCE_MS 10000
#define DRAIN_FAILURE_TOLERANCE_MS NO_SHUTDOWN // not implemented

/**
 * MCU
 */
#define MCU_VCC 3.3 // not used

/**
 * SOC
 */
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
// how often the SOC is written to flash
#define SOC_SAVE_PERIOD_MS 10000

/**
 * Temperature Monitoring
 */

// defined for 2 test segments rn
#define NUM_THERMISTOR (NUM_THERMISTORS_PER_CHIP*NUM_CHIPS)
#define LTC6804_ADC_MAX_VALUE ((float)(1 << 16))
#define LTC6804_ADC_RANGE_V (5.7)
#define THERM_INPUT_V (3.0)

#define MAX_TEMP_DEG_C 100.0
#define OVER_TEMP_DEG_C 60.0
#define MIN_TEMP_DEG_C -20.0

// how long a temperature fault condition must be present to trigger a fault
#define TEMPERATURE_FAULT_HYSTERESIS_MS 1000

/**
 * Power Limiting
 */
#define MAX_POWER_LIMIT_KW 75.0


#endif // F29BMSCONFIG_H
