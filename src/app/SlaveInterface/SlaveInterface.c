#include "HAL_SlaveChips.h"

#include "FaultManager.h"
#include "SlaveInterface.h"

/**
 * Get the latest voltage and draining information from the slave chips.
 * Set faults if communication errors occur.
 * battery_model [out] - destination for updated cell info
 */
void SlaveInterface_read_cell_info(BatteryModel_t* battery_model)
{
    float voltages[NUM_SERIES_CELLS];
    bool is_draining[NUM_SERIES_CELLS];
    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        voltages[i] = 0;
        is_draining[i] = 0;
    }
    
    
    // get data from slave boards
    Error_t err = HAL_SlaveChips_get_all_cell_data(voltages, is_draining, NUM_SERIES_CELLS);

    // check for comm errors
    if (err.active)
    {
        FaultManager_set_fault_active(FaultCode_SLAVE_COMM_CELLS, err.data);
        for (int i = 0; i < NUM_SERIES_CELLS; i++)
        battery_model->cells[i].voltage = 0;
    }  
    else
    {
        FaultManager_clear_fault(FaultCode_SLAVE_COMM_CELLS);

        // copy data into battery model
        for(int i = 0; i < NUM_SERIES_CELLS; i++)
        {
            battery_model->cells[i].voltage = voltages[i];
            battery_model->cells[i].is_draining = is_draining[i];
        }
    }
}

/**
 * Get the latest temperature data for the battery pack.
 * temp_model [out] - destination for updated temperature info
 */
void SlaveInterface_read_temperature_info(TempModel_t* temp_model)
{
    float tm_readings_V[NUM_THERMISTOR];

    // get data from slave boards
    Error_t err = HAL_SlaveChips_get_all_tm_readings(tm_readings_V, temp_model->vref2s, NUM_THERMISTOR);

    // check for communication errors
    if (err.active)
    {
        FaultManager_set_fault_active(FaultCode_SLAVE_COMM_TEMPS, err.data);
    }
    else
    {
        FaultManager_clear_fault(FaultCode_SLAVE_COMM_TEMPS);

        // copy data into temperature model
        for (int i = 0; i < NUM_THERMISTOR; i++)
        {
            temp_model->tm_readings_V[i] = tm_readings_V[i];
        }
    }
}

/**
 * Tell the slave chips to stop/start draining each series cell.
 * battery_model [in] - contains a desired drain state (True or False) for each series cell
 */
void SlaveInterface_request_cell_draining(BatteryModel_t* battery_model)
{
    bool requested_drain_states[NUM_SERIES_CELLS];

    for (int i = 0; i < NUM_SERIES_CELLS; i++)
    {
        requested_drain_states[i] = battery_model->cells[i].is_draining;
    }

    Error_t err = HAL_SlaveChips_request_cell_drain_state(requested_drain_states, NUM_SERIES_CELLS);

    if (err.active)
    {
        FaultManager_set_fault_active(FaultCode_SLAVE_COMM_DRAIN_REQUEST, err.data);
    }
    else
    {
        FaultManager_clear_fault(FaultCode_SLAVE_COMM_DRAIN_REQUEST);
    }
}