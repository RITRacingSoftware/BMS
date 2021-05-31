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
    sim.set_charger_available(True)
    
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
        sim.stage_cell_info(i, 4.25, False)
    
    # make sure we stop charging
    stopped_charging = None
    for i in range(0,5000):
        sim.tick()
        stopped_charging = (sim.signals['BmsChargeRequest_Control'] == 1)
        if stopped_charging:
            break

    assert stopped_charging, "Charging did not stop on full charge condition."

    # now to test if balancing state can be re-entered

    # drain cells, cycle connector
    for i in range(0, 90):
        sim.stage_cell_info(i, 4.1, False)
    sim.set_charger_available(False)    
    for i in range(1000):
        sim.tick()

    # plug connector back in, wait 30 seconds, should end up in charging state
    sim.set_charger_available(True)
    sim.set_current(13.8)
    for i in range(35000):
        sim.tick()
    assert sim.signals['BmsStatus_ChargeState'] == 'ChargeState_CONNECTED_CHARGING'

    # now simulate balancing condition
    sim.stage_cell_info(15, 4.3, False)
    for i in range(1000):
        sim.tick()
    assert sim.signals['BmsStatus_ChargeState'] == 'ChargeState_CONNECTED_BALANCING'



    



    
    
