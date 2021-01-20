from BmsSim import sim
import pytest

def test_charging_fault(sim):
    sim.start_logging('sim_traces/charging_fault.blf')

    # simulate charging condition
    for i in range(0, 90):
        sim.stage_cell_info(i, 2.0, False)
    sim.set_charger_available(False)

    # make sure we start charging
    started_charging = None
    for i in range(0,5000):
        sim.tick()
        if 'BmsChargeRequest_Control' in sim.signals:
            started_charging = (sim.signals['BmsChargeRequest_Control'] == 0)
        if started_charging:
            break

    assert started_charging, "Did not start charging."

    # # cause an overtemperature fault
    sim.stage_temp_info(0, .5)
    
    # wait till there's a fault then make sure charging stops soon after
    faulted = None
    for i in range(0, 10000):
        sim.tick()
        faulted = (sim.signals['BmsFaultVector_OVER_TEMPERATURE'] == 1)
        if (faulted):
            break
    assert faulted, "Temperature fault never occured."

    stopped_charging = False
    for i in range(0, 1500):
        sim.tick()
        stopped_charging = (sim.signals['BmsChargeRequest_Control'] == 1)
        if stopped_charging:
            break
    assert stopped_charging, "Charging did not stop on fault."