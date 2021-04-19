#ifndef F29BMSCONFIG_H
#define F29BMSCONFIG_H

#include "FaultManager.h"

/**
 * Cells
 */

// just defined for 2 test segments rn
#define NUM_SERIES_CELLS 90
#define NUM_PARALLEL_CELLS 3

// NOTE: Be sure to define things here with decimals if you intend to use them as floats

#define CELL_CAPACITY_Ah 6.550
#define BATTERY_CAPACITY_Ah (((float) NUM_PARALLEL_CELLS) * CELL_CAPACITY_Ah)


#define MAX_CELL_V 4.3 // any value above this is considered irrational
#define MAX_ALLOWED_CELL_V 4.1 // any value above this is overcharged and should produce a fault
#define CHARGED_CELL_V 4.0 // once all cells are above this, charging ends
#define MIN_ALLOWED_CELL_V 1.2 // out of juice fault thrown if cells go below this
#define MIN_CELL_V 0.0 // cells below this are considered irrational

#define MAX_CHARGING_CURRENT_A 100.0
#define MAX_CHARGING_V 5
#define CHARGE_CURRENT_SETTLE_TIME_S 5

// The amount two cell voltages must differ by to be considered different
#define VOLTAGE_TOLERANCE 0.001

// maxmimum expected difference in cell voltages
#define MAX_CELL_DIFF_V 0.5
#define DIFF_CORRECTION_THRESHOLD_V 0.3

// how long a voltage fault condition must be present to trigger a fault
#define VOLTAGE_FAULT_HYSTERESIS_MS 500

/**
 * Current Monitoring
 */

#define CURRENT_IRRATIONAL_A 10000
#define OVERCURRENT_A 1000
#define OVERCURRENT_CHG_A -200
#define OVERCURRENT_HYST_MS 5
#define CURRENT_TOLERANCE 0.01

/**
 * Current Sensor
 */
#define CURRENT_SENSOR_ADC_CHANNEL ADC_CHSELR_CHSEL1
#define ADC_MAX_VALUE 4095.0
#define Vref 3.3
#define ZERO_AMP_ADC_CAL 2094.0
#define ZERO_AMP_REF_V ((ZERO_AMP_ADC_CAL/ADC_MAX_VALUE) * Vref)
#define V_PER_A 0.0036168

#define CURRENT_SENSOR_PORT GPIOA
#define CURRENT_SENSOR_PIN GPIO_Pin_1

/**
 * Faults
 */
// any bits set in this won't get set in the fault vector
//#define DISABLE_FAULT_MASK ((1 << FaultCode_SLAVE_COMM_TEMPS) | (1 << FaultCode_CELL_VOLTAGE_IRRATIONAL) | (1 << FaultCode_TEMPERATURE_IRRATIONAL) | (1 << FaultCode_OVER_TEMPERATURE))
#define DISABLE_FAULT_MASK 0x00

// Fault tolerances are the times a fault is allowed to be continuously active before triggering a shutdown event
// value a fault tolerance should have if the fault does not cause the car to shutdown
#define NO_SHUTDOWN -1

#define SLAVE_COMM_CELLS_TOLERANCE_MS 10000
#define SLAVE_COMM_TEMPS_TOLERANCE_MS 10000
#define SLAVE_COMM_DRAIN_REQUEST_TOLERANCE_MS 10000
#define CURRENT_SENSOR_COMM_TOLERANCE_MS 10
#define OVER_CURRENT_TOLERANCE_MS 1
#define CELL_VOLTAGE_IRRATIONAL_TOLERANCE_MS 10000
#define CELL_VOLTAGE_DIFF_TOLERANCE_MS NO_SHUTDOWN
#define OUT_OF_JUICE_TOLERANCE_MS 1
#define OVER_TEMPERATURE_TOLERANCE_MS 1
#define TEMPERATURE_IRRATIONAL_TOLERANCE_MS 10000
#define DRAIN_FAILURE_TOLERANCE_MS NO_SHUTDOWN

/**
 * MCU
 */
#define MCU_VCC 3.3

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
#define NUM_THERMISTOR 18

#define MAX_TEMP_DEG_C 100.0
#define OVER_TEMP_DEG_C 60.0
#define MIN_TEMP_DEG_C -20.0

// how long a temperature fault condition must be present to trigger a fault
#define TEMPERATURE_FAULT_HYSTERESIS_MS 1000

#endif // F29BMSCONFIG_H