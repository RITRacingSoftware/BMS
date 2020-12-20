import ctypes
import time
import signal
import os
import pytest

"""
Python wrapping of BmsSim.c functions.

"""

class BmsSim:
    def __init__(self):
        signal.signal(signal.SIGINT, self._interrupt_signal_handler)
        self.clib = ctypes.CDLL('src/sim/libBmsSim.so') # must be relative from root of repo, thats where the test scripts are ran from
        self.clib.BmsSim_init()

    def start(self):
        self.clib.BmsSim_start()
        time.sleep(1) # give time for the sim to initialize

    def stop(self):
        time.sleep(1) # give time for the sim to stop processing input
        self.clib.BmsSim_stop()
    
    # makes sure the socket gets closed on interrupt
    def _interrupt_signal_handler(self, signo, arg1):
        self.stop()
        exit(0)

    def tick(self):
        self.clib.BmsSim_tick()
    
    def get_status_led(self):
        return self.clib.BmsSim_get_status_led()
    
    def get_shutdown_line(self):
        return self.clib.BmsSim_get_shutdown_line()
    
    def get_charge_enable(self):
        return self.clib.BmsSim_get_charge_enable()
    
    def __del__(self):
        self.stop()

@pytest.fixture
def sim():
    """
    Think of this as a "Before Each" function from other testing frameworks.
    If a pytest function has an argument "sim", this function is run before the test and its 
    return value is "sim".
    """
    
    s = BmsSim()
    s.start()
    return s