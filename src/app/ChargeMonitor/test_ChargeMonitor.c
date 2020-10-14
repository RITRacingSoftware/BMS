#include "unity.h"

#include "ChargeMonitor.h"

#include "MockHAL_Gpio.h"

void setUp(void)
{
    HAL_Gpio_write_Ignore();
    ChargeMonitor_init();
}

/**
 * Verify charging is not allowed when the pack is fully charged.
 */
void test_ChargeMonitor_shut_off(void)
{
    BatteryModel_t bm;

    // start out just below charging shut off threshold
    bm.average_V = CHARGE_SHUTOFF_V - 0.1;
    
    // simulate a charger connected condition
    HAL_Gpio_read_ExpectAndReturn(GpioPin_CHARGER_AVAILABLE, false);
    // should allow charging
    HAL_Gpio_write_Expect(GpioPin_CHARGE_ENABLE, true);
    ChargeMonitor_1Hz(&bm);

    TEST_ASSERT_MESSAGE(ChargeMonitor_charger_available() == true, "Charger not detected when GPIO read low");

    bm.average_V = CHARGE_SHUTOFF_V + 0.1;
    // simulate a charger connected condition
    HAL_Gpio_read_ExpectAndReturn(GpioPin_CHARGER_AVAILABLE, false);
    // should NOT allow charging since we are fully charged
    HAL_Gpio_write_Expect(GpioPin_CHARGE_ENABLE, false);
    ChargeMonitor_1Hz(&bm);

    // allow charging based on voltage again
    bm.average_V = CHARGE_SHUTOFF_V - 0.1;
    // simulate a charger NOT connected condition
    HAL_Gpio_read_ExpectAndReturn(GpioPin_CHARGER_AVAILABLE, true);
    // should NOT allow charging since the charger is not connected
    HAL_Gpio_write_Expect(GpioPin_CHARGE_ENABLE, false);
    ChargeMonitor_1Hz(&bm);

    TEST_ASSERT_MESSAGE(ChargeMonitor_charger_available() == false, "Charger detected whe GPIO read high");
}