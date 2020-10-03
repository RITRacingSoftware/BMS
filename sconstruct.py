import SCons

import os
from pathlib import Path

from site_scons import scons_constants

"""
SCons entry point for f29bms project.
Contains build instructions for everything.

author: Chris Blust
"""
# setup static directory structure
SRC_DIR = REPO_ROOT_DIR.Dir('src')
COMMON_DIR = SRC_DIR.Dir('common')
APP_DIR = SRC_DIR.Dir('app')
DRIVER_DIR = SRC_DIR.Dir('driver')
BIN_DIR = REPO_ROOT_DIR.Dir('bin')
LIBS_DIR = REPO_ROOT_DIR.Dir('libs')
STM32_LIB_DIR = LIBS_DIR.Dir('stm32libs/STM32F0xx_StdPeriph_Driver')
STM32_CMSIS_DIR = LIBS_DIR.Dir('stm32libs/CMSIS')

# module names are determined by folder name under app/ or driver/
# application module directories go under APP_DIR, and driver modules under DRIVER_DIR

# Get list of tuples for application modules: (name, directory path)
app_modules = []
for directory in (d for d in Path(str(APP_DIR)).iterdir() if d.is_dir()):
    module_path = REPO_ROOT_DIR.Dir(str(directory))
    module_name = module_path.abspath.split('/')[-1]
    app_modules.append((module_name, module_path))
# Get list of tuples for driver modules: (name, directory path)
driver_modules = []
for directory in (d for d in Path(str(DRIVER_DIR)).iterdir() if d.is_dir()):
    module_path = REPO_ROOT_DIR.Dir(str(directory))
    module_name = module_path.abspath.split('/')[-1]
    driver_modules.append((module_name, module_path))
# Get list of tuples for common module: (name, directory path)
common_modules = []
for directory in (d for d in Path(str(COMMON_DIR)).iterdir() if d.is_dir()):
    module_path = REPO_ROOT_DIR.Dir(str(directory))
    module_name = module_path.abspath.split('/')[-1]
    common_modules.append((module_name, module_path))

modules = app_modules + driver_modules + common_modules

"""
cmock generation. Generates mocks for each module and unit test runner source for each application module.
"""
# this essentially "includes" the cmock tool from site_scons/site_init.py
cmock_env = Environment(
    tools=[TOOL_CMOCK]
)

# Instructions for generating cmocked modules
# list of each module's 'mocks' dir (where the mocks are stored)
mock_modules = []
cmock_generated_headers = []
for module_name, module_dir in (app_modules + driver_modules):
    mocks_dir = module_dir.Dir('mocks')
    # later source in this file will need these directories
    mock_modules.append(mocks_dir)
    cmock_header = cmock_env.GenerateMocks(
           # only input is the module's header file
           source=module_dir.File(module_name + '.h'),
           target=[mocks_dir.File('Mock{}.c'.format(module_name)), mocks_dir.File('Mock{}.h'.format(module_name))]
    )
    cmock_generated_headers += cmock_header
    Clean(cmock_header, mocks_dir) # tell scons to clean these up when --clean is specified

Alias('cmock-headers', cmock_generated_headers)

# Instructions for generating unit test runner source
cmock_testrunner_src = []
for module_name, module_dir in app_modules:
    mocks_dir = module_dir.Dir('mocks')
    testrunner = cmock_env.GenerateTestRunner(
        # input is just the file containing the unit tests
        source=module_dir.File('test_{}.c'.format(module_name)),
        target=mocks_dir.File('testrunner_{}.c'.format(module_name))
    )
    cmock_testrunner_src += testrunner

Alias('cmock-testrunner-src', cmock_testrunner_src)

"""
Application/Driver Module compilation instructions.
Supports Linux and stm32 compilation targets.
Dependency differentiation is based on filename: stm32 objects end in .stm32.o
"""

# set up an environment to compile for linux
tool_paths = []
tool_paths.append(REPO_ROOT_DIR.Dir('libs/cmock/vendor/unity/src'))
tool_paths.append(REPO_ROOT_DIR.Dir('libs/cmock/src'))
tool_paths.append(STM32_LIB_DIR.Dir('inc'))
tool_paths.append(STM32_CMSIS_DIR.Dir('Device/ST/STM32F0xx/Include'))
tool_paths.append(STM32_CMSIS_DIR.Dir('Include'))
module_path_names = []
for mod_name, mod_path in modules:
    module_path_names.append(mod_path)
linux_comp_env = Environment(
     # 'platform' is a handy argument provided by SCons that automatically sets a ton of env vars
    platform='posix',
    CPPPATH=module_path_names + mock_modules + tool_paths + [APP_DIR.abspath, COMMON_DIR.abspath]
)

stm32_comp_env = Environment(
    tools=[TOOL_ARM_ELF_HEX, 'gcc'],
    CC=scons_constants.ARM_CC,
    CPPPATH=module_path_names + tool_paths + [SRC_DIR.Dir('app').abspath, SRC_DIR.abspath],
    CPPDEFINES=['STM32F091', 'USE_STDPERIPH_DRIVER'],
    CCFLAGS=['-mcpu=cortex-m0']
)

# instructions to compile every module
linux_app_objects = {}
stm32_app_objects = {}
linux_driver_objects = {}
stm32_driver_objects = {}
linux_common_objects = {}
stm32_common_objects = {}
for module_name, module_dir in app_modules:
    # intructions for linux compilation
    linux_app_objects[module_name] = linux_comp_env.Object(module_dir.File(module_name + '.c'))
    # instructions for stm32 compilation
    stm32_app_objects[module_name] = stm32_comp_env.Object(
        source=module_dir.File(module_name + '.c'),
        target=module_dir.File('STM32_' + module_name + '.o')
    )
    # need this since we use a custom target name
    Clean(stm32_app_objects[module_name], module_dir.File(module_name + '.stm32.o'))

for module_name, module_dir in driver_modules:
    linux_driver_objects[module_name] = linux_comp_env.Object(module_dir.File('SIM_' + module_name + '.c'))
    stm32_driver_objects[module_name] = stm32_comp_env.Object(
        source=module_dir.File('STM32_' + module_name + '.c'),
        target=module_dir.File('STM32_' + module_name + '.o')
    )

    # need this since we use a custom target name
    Clean(stm32_driver_objects[module_name], module_dir.File('STM32_' + module_name + '.o'))

for module_name, module_dir in common_modules:
    linux_common_objects[module_name] = linux_comp_env.Object(module_dir.File(module_name + '.c'))
    stm32_common_objects[module_name] = stm32_comp_env.Object(
        source=module_dir.File(module_name + '.c'),
        target=module_dir.File('STM32_' + module_name + '.o')
    )

    # need this since we use a custom target name
    Clean(stm32_common_objects[module_name], module_dir.File('STM32_' + module_name + '.o'))

# Compile stm32 provided hardware libraries
stm32_lib_objs = []
for source in Glob(os.path.join(STM32_LIB_DIR.Dir('src').abspath, '*.c')):
    stm32_lib_objs += stm32_comp_env.Object(source)

# instructions to compile every mock module
mock_objects = {}
for module_name, module_dir in (app_modules + driver_modules):
    mock_objects[module_name] = linux_comp_env.Object(module_dir.File('mocks/Mock{}.c'.format(module_name)))

"""
CAN module depends on generated CAN code.
This section defines this dependency and provides instructions for generating this code
using the dbcc tool + custom id define generation tool.
"""
DBC_DIR = APP_DIR.Dir('CAN')
DBC_NAME = 'f29bms_dbc'

# first take care of the can id definition
can_header_script = LIBS_DIR.File('gen_can_header/gen_can_header_from_dbc.py')
can_header = APP_DIR.File('CAN/can_ids.h')

can_id_header = Command(
    [can_header],
    [],
    ['python3 {} {} {}'.format(can_header_script.abspath, DBC_DIR.File(DBC_NAME + '.dbc'), can_header.abspath) ]
)

# tell scons to update the id file whenever the dbc changes
Depends(can_header, DBC_DIR.File(DBC_NAME + '.dbc'))

# first must compile dbcc from source
dbcc_tool_bin = Command(
    [DBCC_DIR.File('dbcc')],
    [],
    ['cd {} && make'.format(DBCC_DIR.abspath)]
)
Clean(dbcc_tool_bin, Glob(DBC_DIR.abspath + "/*.o"))

# instructions to generate can packing source code
dbcc_env = Environment(
    tools=[TOOL_DBCC]
)

generated_dbc_source = dbcc_env.GenerateDbcSource(
    source=DBC_DIR.File(DBC_NAME + '.dbc'),
    target=DBC_DIR.File(DBC_NAME + '.c')
)

# anything that depends on the generated c file depends on the generated h file
# anything that depends on CAN.h depends on the generated h file
Depends(DBC_DIR.File(DBC_NAME + '.h'), generated_dbc_source)
Depends(DBC_DIR.File('CAN.h'), generated_dbc_source)

Clean(DBC_DIR.File(DBC_NAME + '.c'), DBC_DIR.File(DBC_NAME + '.h'))

Clean(generated_dbc_source, DBC_DIR.File(DBC_NAME + 'h'))

# instructions for compiling can packing source code
linux_dbc_gen_obj = linux_comp_env.Object(DBC_DIR.File(DBC_NAME + '.c'))
stm32_dbc_gen_obj = stm32_comp_env.Object(
    source=DBC_DIR.File(DBC_NAME + '.c'),
    target=DBC_DIR.File('STM32_' + DBC_NAME + '.o')
)

# tell scons the dbcc program must exist in order to run it
Depends(generated_dbc_source, dbcc_tool_bin)

# establish explicit dependency of compiled CAN module on generated source
Depends(linux_app_objects['CAN'], generated_dbc_source)
Depends(stm32_app_objects['CAN'], generated_dbc_source)
Depends(mock_objects['CAN'], generated_dbc_source)

"""
Instructions for Unit test compilation.
For each module, creates a linux binary from the test_<Module Name>.c file
found in the module directory.
"""
# compiles the cmock library
# also compiles unity (unit testing framework, submodule of cmock lib)
CMOCK_ROOT_DIR = REPO_ROOT_DIR.Dir('libs/cmock/')
cmock_libs = Command(
    [CMOCK_ROOT_DIR.File('build/meson-out/libcmock.a.p/cmock.c.o'), CMOCK_ROOT_DIR.File('build/meson-out/libunity.a.p/unity.c.o')],
    [],
    'cd {} && meson build && cd build && meson compile'.format(CMOCK_ROOT_DIR.abspath)
)
Clean(cmock_libs, CMOCK_ROOT_DIR.Dir('build'))

# instructions for compiling each module's unit test source
test_objects = {}
for module_name, module_dir in app_modules:    
    test_objects[module_name] = linux_comp_env.Object(module_dir.File('test_{}.c'.format(module_name)))

# instructions for compiling test runner executables
app_test_runners = []
for module_name, module_dir in app_modules:
    mocks_dir = module_dir.Dir('mocks')

    # shallow copy mock_objects and remove the module under test's mock
    # this is so we aren't testing mocked functions and instead test the real ones
    req_mocks = mock_objects.copy()
    del req_mocks[module_name]

    test_runner = linux_comp_env.Program(
        target=module_dir.File('testrunner_' + module_name),
        source=[
            mocks_dir.File('testrunner_' + module_name + '.c'), 
            cmock_libs,
            req_mocks.values(),
            linux_common_objects.values(),
            linux_dbc_gen_obj,
            test_objects[module_name], 
            linux_app_objects[module_name]]
    )
    app_test_runners.append(test_runner)

Alias('testrunners', app_test_runners)

"""
Instructions for running unit tests.
If a unit test fails, the build fails.
"""

# contains scons nodes signifying unit test runs
unit_test_results = []
for module_name, module_dir in app_modules:
    # executable to run
    testrunner = module_dir.File('testrunner_' + module_name)
    # results file to print to
    test_result_file = module_dir.File('unit_test_results.txt')
    unit_test_results += Command(
        source=testrunner,
        target=test_result_file,
        # TODO remove janky bash workaround and get Command() to use bash (sh test dont work)
        # Run the executable, tee (split) the output between stdout and the results file,
        # then check the status of the testrunner executable to fail the build if needed.
        # This is necessary if we want result files for unit tests (since the executables dont write to files)
        action='echo \'{} | tee {} && test $$PIPESTATUS -eq 0\' | bash'.format(testrunner.abspath, test_result_file.abspath)
    )

Alias('unit-tests', unit_test_results)
Default(unit_test_results)

"""
Instructions for compiling driver test applications.
"""

test_apps = {}
for module_name, module_dir in driver_modules:
    # Compilation of test application main
    test_app_obj = stm32_comp_env.Object(module_dir.File('test_STM32_' + module_name + '.c'))
    
    # need list of strings not nodes for the next step
    # Which is to build the elf, which requires all the object files
    objs = [test_app_obj]
    for driver_obj in stm32_driver_objects.values():
        objs.append(driver_obj)
    for common_obj in stm32_common_objects.values():
        objs.append(common_obj)
    
    objs.extend(stm32_lib_objs)
    objs.append(stm32_dbc_gen_obj)

    # stm32 elf generation
    stm32_elf = stm32_comp_env.BuildElf(
        source=objs,
        target=module_dir.File('test_STM32_' + module_name + '.elf')
    )

    # stm32 hex generation
    test_apps[module_name] = stm32_comp_env.BuildHex(
        source=stm32_elf,
        target=BIN_DIR.File('test_STM32_' + module_name + '.hex')
    )

Alias('test-apps', test_apps.values())
