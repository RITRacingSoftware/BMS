#ifndef F29BMSCONFIG_H
#define F29BMSCONFIG_H

#include "FaultManager.h"

/**
 * Cells
 */

#define NUM_BOARDS 4
#define NUM_CHIPS (NUM_BOARDS*2)
#define NUM_CELLS_PER_BOARD 19
#define NUM_THERMISTORS_PER_CHIP 4
#define NUM_SERIES_CELLS (NUM_BOARDS * NUM_CELLS_PER_BOARD)
#define NUM_PARALLEL_CELLS 1

// NOTE: Be sure to define things here with decimals if you intend to use them as floats

#define CELL_CAPACITY_Ah 10.000
#define BATTERY_CAPACITY_Ah (((float) NUM_PARALLEL_CELLS) * CELL_CAPACITY_Ah)


#define MAX_CELL_V 4.5 // any value above this is considered irrational

#define MAX_ALLOWED_CELL_V 4.2 // any cell above this is considered overcharged and balancing should begin
#define CHARGED_CELL_V 4.18 // once all cells are above this, charging ends

// out of juice fault thrown if cells go below this
#define MIN_ALLOWED_CELL_V 3 // Datasheet says 3.0  
#define MIN_CELL_V 2.0 // cells below this are considered irrational

#define BALANCING_HISTERESIS_V .02 // how low a cell must be balanced below CHARGED_CELL_V for balancing to shut off
#define BALANCING_MEASURE_INTERVAL_S 30 // how long to wait in between measuring cell voltages when balancing

// Simply transmitted to the charger.
// These are NOT the overcurrent limits. See later in this document for those.
#define MAX_CHARGING_CURRENT_A 15
#define MAX_CHARGING_V ((float)MAX_ALLOWED_CELL_V * (float)NUM_SERIES_CELLS)
#define CHARGE_CURRENT_SETTLE_TIME_S 30

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
#define MAX_POWER_LIMIT_KW 70.0

/**
 * Limp Mode
*/

// These are the different levels of limp mode, with level 1 being the least limiting, and level 3 being the most limiting
#define LIMP_MODE_LEVEL_1_CURRENT_A 175.0
#define LIMP_MODE_LEVEL_2_CURRENT_A 115.0
#define LIMP_MODE_LEVEL_3_CURRENT_A 95.0
#define LIMP_MODE_LEVEL_4_CURRENT_A 75.0
#define LIMP_MODE_LEVEL_5_CURRENT_A 40.0

// These are the voltages when the levels of limp modes will be entered
#define LIMP_MODE_VOLTAGE_LEVEL_1 3.7
#define LIMP_MODE_VOLTAGE_LEVEL_2 3.6
#define LIMP_MODE_VOLTAGE_LEVEL_3 3.5 
#define LIMP_MODE_VOLTAGE_LEVEL_4 3.4 
#define LIMP_MODE_VOLTAGE_LEVEL_5 3.25

// These are the times that the voltage has to be below the threshold before entering the limp mode
#define LIMP_MODE_VOLTAGE_LEVEL_1_TIME_MS 10000 //Change back to 2500 for Endurance
#define LIMP_MODE_VOLTAGE_LEVEL_2_TIME_MS 10000 //Change back to 2500 for Endurance
#define LIMP_MODE_VOLTAGE_LEVEL_3_TIME_MS 2500 //Change back to 2500 for Endurance
#define LIMP_MODE_VOLTAGE_LEVEL_4_TIME_MS 0
#define LIMP_MODE_VOLTAGE_LEVEL_5_TIME_MS 0


// These are the temperatures when the levels of limp modes will be entered
#define LIMP_MODE_TEMP_LEVEL_1 48.0 //53.0
#define LIMP_MODE_TEMP_LEVEL_2 51.0 //54.0
#define LIMP_MODE_TEMP_LEVEL_3 53.0 //55.0
#define LIMP_MODE_TEMP_LEVEL_4 55.0 //56.0
#define LIMP_MODE_TEMP_LEVEL_5 57.0 //57.0

#endif // F29BMSCONFIG_H
