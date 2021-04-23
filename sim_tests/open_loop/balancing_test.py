from BmsSim import sim
import pytest

def test_balancing(sim):
    """
    Verify cells balance when they are above the charging threshold and when they are
    too far ahead of other cells.
    """
    sim.start_logging('sim_traces/balancing.blf')

    # start charging
    for i in range(0, 90):
        sim.stage_cell_info(i, 3.9, False)
    sim.set_charger_available(1)

    charging = None
    for i in range(0, 3000):
        sim.tick()
        if 'BmsChargeRequest_Control' in sim.signals:
            charging = sim.signals['BmsChargeRequest_Control']
        if charging:
            break
    
    assert charging, "Charging did not begin"

    # now set every other cell to a voltage that should trigger balancing
    for i in range(1, 91, 2):
        sim.stage_cell_info(i, 4.26, False)

    # cells that are above the charging threshold should be balanced even if they arent that far behind the largest voltage
    sim.stage_cell_info(0, 4.16, False)

    for i in range(0, 3000):
        sim.tick()
        if sim.signals['BmsStatus_ChargeState'] == 'ChargeState_CONNECTED_BALANCING':
            break
    
    
    assert sim.signals['BmsStatus_ChargeState'] == 'ChargeState_CONNECTED_BALANCING', "balancing did not start"
    
    # give code time to assert drain states
    for i in range(0, 8000):
        sim.tick()
     
    for i in range(0,90):
        print("cell {}: {} {}".format(i, sim.read_drain_state(i), sim.signals["BmsVoltages_Cell{}".format(i)]))
    for i in range(2, 90, 2):
        assert sim.read_drain_state(i) == False, "Wrong cell drained"
    for i in range(1, 91, 2):
        assert sim.read_drain_state(i) == True, "Cell not drained when appropriate"
   

    assert sim.read_drain_state(0) == True, "Cell not drained when appropriate"

    

