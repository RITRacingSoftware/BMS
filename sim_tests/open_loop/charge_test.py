from BmsSim import sim
import pytest

def test_charge_to_full(sim):
    sim.start_logging('sim_traces/charge_to_full.blf')

    # set up a charging condition
    for i in range(0, 90):
        sim.stage_cell_info(i, 2.0, False)

    # make sure we start out not charging
    for i in range(0, 1000):
        sim.tick()
        assert 'BmsChargeRequest_Control' not in sim.signals
    
    # simulate a plug in
    sim.set_charger_available(False)
    
    # wait for charging to be requested
    charge_requested = None
    for i in range(0, 5000):
        sim.tick()
        if ('BmsChargeRequest_Control' in sim.signals):
            charge_requested = sim.signals['BmsChargeRequest_Control']
        
        if charge_requested == False:
            break

    assert charge_requested == 0, 'Charging did not start on plug in!'

    # charge for a bit, simulate nominal charging current
    sim.set_current(50) # max charge current / 2
    for i in range(0,10000):
        sim.tick()
        # make sure we stay charging
        assert sim.signals['BmsChargeRequest_Control'] == 0, "Stopped charging spontaneously!"

    # simulate charged condition
    for i in range(0, 90):
        sim.stage_cell_info(i, 4.1, False)
    
    # make sure we stop charging
    stopped_charging = None
    for i in range(0,5000):
        sim.tick()
        stopped_charging = (sim.signals['BmsChargeRequest_Control'] == 1)
        if stopped_charging:
            break
    
    assert stopped_charging, "Charging did not stop on full charge condition."



    



    
    
