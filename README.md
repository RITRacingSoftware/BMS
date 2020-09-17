# RIT Formula SAE Battery Management System Firmware
Welcome! This is the home of all source for the BMS master board stm32 microcontroller.
This code accomplishes the following responsibilities:
1. Balance Series Cell Voltages
2. Monitor Battery Pack Temperatures
3. Report data such as State of Charge over CAN
4. Indicate faults by triggering f29's shutdown circuit

## Installation
We utilize Docker to build anywhere. Install it from [docker.com](https://www.docker.com/).

If you would like to build on Windows, there are additional steps, see [Docker's windows instructions](https://docs.docker.com/docker-for-windows/install-windows-home/)

## Building Everything
Once docker is installed, use `docker-build.sh` to build the docker image.

From now on, you can just use `docker-run-build.sh` to run the firmware build in a docker container based on the above image.

If you need to update your docker image, use `docker-remove-image.sh` then build it again with `docker-build.sh`.

## Building Specific Targets
Use `enter-docker.sh` to get a shell inside the f29bms docker container. From here, you can run `build.sh` to build everything, just like `docker-run-build.sh`.

Specific targets can also be built using SCons commands from the docker container shell:
- `scons unit-tests`
    -build and run application module unit tests
- `scons test-apps`
    -build driver module test application hexes for loading onto an stm32 development board
- `scons bin/test_STM32_<driver module name>.hex`
    -build a specific driver test application hex
- `scons src/app/<app module name>/unit_test_results.txt`
    -unit test a specific application module

You can speed up builds with multithreading by adding `-j<number of cores>` to any scons command

See [SCons](https://github.com/SCons/scons/wiki) and our `sconstruct.py` (top level) for more details on the build system.

## Source Code Structure
Each C module has its own folder where its header (.h), source (.c), and test source (test_\<module name>.c) files are located.

Application logic is implemented in hardware agnostic application modules under src/app. The test source for these modules contains unit tests that run automatically using Unity/CMock.

Driver code is implemented in hardware specific driver modules under src/driver. There are two source files for each driver module: SIM_HAL_\<module name>.c, drivers for interfacing with a simulation running on linux, and STM32_HAL_\<module name>.c, drivers for the stm32 microcontroller. The test source for driver modules is a program made for running on an stm32 evaluation board for testing the drivers.