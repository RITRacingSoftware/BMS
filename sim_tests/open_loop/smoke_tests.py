from BmsSim import sim
import time
import sys
import pytest

def test_blink_check(sim):
    """
    Basic test to make sure freertos tasks are running and bms interface works.
    If this breaks, your code changes likely broke something fundamental to the sim.
    ...Or you changed the status led nominal pattern

    Verifies Status LED blinks once every three seconds.
    """

    sim.start_logging("sim_traces/smoke_tests.blf")

    led_was_off = False
    led_was_on = False

    for ms in range(0, 3000):
        sim.tick()
        led_state = sim.get_status_led()
        if led_state == True:
            led_was_on = True
        elif led_state == False:
            led_was_off = True;        
    assert led_was_off == True, "Status LED failed to turn off"
    assert led_was_on == True, "Status LED failed to turn on"