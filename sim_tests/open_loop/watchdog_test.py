from BmsSim import sim
import pytest

def test_watchdog(sim):
    """
    Basic test to make sure watchdog task works. Test to make sure 
    Check window (such as 43-56 seconds) make sure false and then gets pet
    """
    sim.start_logging('sim_traces/watchdog.blf')
    pet = None
    for i in range(0, 43000):
        sim.tick(sim)
    for i in range(0, 11000):
        sim.tick(self)
        if pet == False:
            if sim.get_watchdog_pet():
                pet = True
        elif pet == True:
            break
        elif not sim.get_watchdog_pet():
            pet = False
    assert pet, "Watchdog not pet"