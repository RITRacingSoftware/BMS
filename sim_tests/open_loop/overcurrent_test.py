from BmsSim import sim
import pytest

def test_overcurrent(sim):
    sim.start_logging('sim_traces/overcurrent_test.blf')

    # make sure the shutdown line isn't asserted
    assert sim.get_shutdown_line() == 1, "Shutdown line started asserted!"

    # start driving using a safe current
    sim.set_current(500)

    for i in range(5000):
        sim.tick()
    
    assert sim.get_shutdown_line() == 1, "Shutdown line asserted during safe driving"

    # now draw a dangerous current
    sim.set_current(1001)

    car_stopped = None
    for i in range(2000):
        sim.tick()
        car_stopped = (sim.get_shutdown_line() == 0)
        if car_stopped:
            break

    assert car_stopped, "Shutdown line was not asserted on overcurrent condition"       