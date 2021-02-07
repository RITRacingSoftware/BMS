from BmsSim import sim
import pytest

def test_temperature_faults(sim):
    """
    Vary thermistor voltages and check for shutdown line assertion.
    """

    sim.start_logging('sim_traces/temperature_faults.blf')

    for i in range(0, 1000):
        sim.tick()
    
    assert sim.signals['BmsFaultVector_OVER_TEMPERATURE'] == 0
    assert sim.signals['BmsFaultVector_TEMPERATURE_IRRATIONAL'] == 0
    assert sim.get_shutdown_line() == 1

    sim.stage_temp_info(therm_index=0, voltage=3.0)
    for i in range(0, 2000):
        sim.tick()
    
    assert sim.signals['BmsFaultVector_OVER_TEMPERATURE'] == 0
    assert sim.signals['BmsFaultVector_TEMPERATURE_IRRATIONAL'] == 1
    # Could check shutdown line here but it doesn't assert for 10s on irrational condition

    sim.stage_temp_info(therm_index=0, voltage=.5)
    for i in range(0, 2000):
        sim.tick()
    
    assert sim.signals['BmsFaultVector_OVER_TEMPERATURE'] == 1
    assert sim.signals['BmsFaultVector_TEMPERATURE_IRRATIONAL'] == 0
    assert sim.get_shutdown_line() == 0 # shutdown should assert immediately here