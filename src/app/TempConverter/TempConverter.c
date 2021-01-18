#include "TempConverter.h"

// length of the thermistor LUT
static int temp_lut_len;
// offset of thermistor LUT
static int temp_lut_offset;
// thermistor LUT (array of floats)
static float* temp_lut;
// resistance of the resistor the thermistor is in series with
static float divider_ohm;

/**
 * Use a binary search and a linear interpolation to get a temperature from a resistance.
 * target_resistance [in] - the resistance to find the associated temperature for
 */
static float binary_search_temp_lut(float target_resistance)
{
    static const int MAX_ITERATIONS = 100;

    int iterations = 0;
    int low_bound = 0;
    int high_bound = temp_lut_len - 1;
    int middle_idx = high_bound / 2;

    float temperature_result = 1000; // if this value is seen it means the binary search failed

    while (iterations < MAX_ITERATIONS)
    {
        // if target resistance is in between two temperature integers...
        if (high_bound - low_bound == 1)
        {
            if ((target_resistance <= temp_lut[low_bound]) && (target_resistance >= temp_lut[high_bound])) 
            {
                // then we need to linearly interpolate between the two values
                // x = x1 + (y-y1)( (x2-x1)/(y2-y1) )
                temperature_result = (target_resistance - temp_lut[low_bound])*( (high_bound-low_bound)/(temp_lut[high_bound]-temp_lut[low_bound]) ) + low_bound;
                break;
            }
            else
            {
                // temperature not in LUT
                // assign edge case and break
                
                // if resistance is lower than smallest deg C of LUT
                if (high_bound == temp_lut_len - 1)
                {
                    // clip to lowest deg C
                    temperature_result = temp_lut[high_bound];
                }
                else 
                {
                    // resistance is higher than highest deg C of LUT
                    // clip to highest deg C
                    temperature_result = temp_lut[0];
                }
                break;
            }
        } 
        // if the middle index is spot on the target resistance....
        else if (temp_lut[middle_idx] == target_resistance)
        {   
            // easy, the index is the temperature
            temperature_result = middle_idx;
            break;
        } 
        // if the target resistance is greater than the resistance at the middle index...
        else if (temp_lut[middle_idx] < target_resistance)
        {
            high_bound = middle_idx;
        }
        // if the target resistance is less than the resistance at the middle index... 
        else
        {
            low_bound = middle_idx;
        }

        middle_idx = (low_bound + high_bound) / 2;
        iterations++;
    }

    return temperature_result;
}

void TempConverter_init(float* tlut, int tlut_len, float tlut_offset, float div_ohm)
{
    temp_lut = tlut;
    temp_lut_len = tlut_len;
    temp_lut_offset = tlut_offset;
    divider_ohm = div_ohm;
}

void TempConverter_convert(TempModel_t* tm) 
{
    for (int i = 0; i < NUM_THERMISTOR; i++)
    {
        float temp_V = tm->tm_readings_V[i];

        // first convert from voltage to resistance using voltage division
        // ((Vout * divider_ohms)/Vin) / (1 - Vout/Vin)
        float Vout_over_Vin = temp_V/MCU_VCC;
        float ntc_Ohm = (Vout_over_Vin * divider_ohm) / (1 - Vout_over_Vin);        
        
        // binary search of the temp LUT
        tm->temps_C[i] = binary_search_temp_lut(ntc_Ohm) + temp_lut_offset;
    }
}
