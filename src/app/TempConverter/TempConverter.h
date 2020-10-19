#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include "TempModel.h"
#include "McuConfig.h"

/**
 * Input the LUT to be used for temperature conversion.
 * tlut [in] - array of resistances in ohms with indexes in deg C(Thermistor Look Up Table)
 * tlut_len [in] - length of tlut
 * tlut_offset [in] - the temperature in deg C associated with the 0 index of the LUT
 * divier_ohm [in] - resistance of the resistor in series with the thermistor
 */
void TempConverter_init(float* tlut, int tlut_len, float tlut_offset, float div_ohm);

/*
 * Convert thermistor resistance measurements to temperatures.
 */
void TempConverter_convert(TempModel_t* tm);

#endif // TEMPCONVERTER_H
