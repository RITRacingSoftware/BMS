from BmsSim import sim
import pytest

def test_out_of_charge(sim):
    sim.start_logging('sim_traces/out_of_charge.blf')

    for i in range(0,1000):
        sim.tick()
        assert sim.get_shutdown_line() == 1, "Shutdown line asserted on startup."
    
    # simulate current and make sure we're still running
    sim.set_current(100)
    for i in range(0, 5000):
        sim.tick()
        assert sim.get_shutdown_line() == 1, "Shutdown line asserted during regular driving."
    
    # set a single cell voltage to below the shut down threshold
    sim.stage_cell_info(0, 1.2, False)

    for i in range(0, 1500):
        sim.tick()
    
    assert sim.get_shutdown_line() == 0, "BMS did not request shutdown with a bottomed out cell!"



    