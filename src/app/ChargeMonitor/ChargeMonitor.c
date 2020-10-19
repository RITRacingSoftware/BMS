#include "ChargeMonitor.h"

#include "HAL_Gpio.h"

static bool charger_connected, is_charging;

void ChargeMonitor_init(void)
{
    // don't start up requesting charge
    HAL_Gpio_write(GpioPin_CHARGE_ENABLE, false);

    is_charging = false;

    // assume charger is not connected
    charger_connected = false;
}

/**
 * Request charging if the charger is connected.
 * Check the average cell voltage in the battery pack.
 * Once it crosses the fully charged threshold, request to stop charging.
 */
void ChargeMonitor_1Hz(BatteryModel_t* bm)
{
    // this is active low, hence the !
    charger_connected = !HAL_Gpio_read(GpioPin_CHARGER_AVAILABLE);

    // if the charger is connected and the pack isn't fully charged...
    if (charger_connected && (bm->largest_V < CHARGE_SHUTOFF_V))
    {

        // say YES to charging!
        HAL_Gpio_write(GpioPin_CHARGE_ENABLE, true);
        is_charging = true;
    }
    else
    {
        // say NO to charging!
        HAL_Gpio_write(GpioPin_CHARGE_ENABLE, false);
        is_charging = false;
    }
}

/**
 * Return true if the charger is connected, false otherwise.
 */
bool ChargeMonitor_charger_available(void)
{
    return charger_connected;
}

bool ChargeMonitor_is_charging(void)
{
    return is_charging;
}
