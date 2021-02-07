from BmsSim import sim
import pytest

def test_soc(sim):
    """
    A not very extensive test that verifies the SOC drains to zero as expected with a
    provided current.
    """
    sim.start_logging('sim_traces/soc_tests.blf')
    
    # run the sim till we get an SOC message
    for i in range(2000):
        sim.tick()
        #if 'BmsStatus_SOC' in sim.signals:
        #    break
    
    assert 'BmsStatus_SOC' in sim.signals, "BmsStatus never sent"
    assert sim.signals['BmsStatus_SOC'] == 100, 'SOC did not start at 100%'

    # at 1000A, the battery will drain in .1179 minutes, or 7074ms
    # the bms will also fault but 
    sim.set_current(10000)
    drain_time_ms = 7074
    for i in range(drain_time_ms):
        sim.tick()
    
    # get last SOC update
    sim.set_current(0)
    for i in range(2000):
        sim.tick()


    assert sim.signals['BmsStatus_SOC'] <= 1