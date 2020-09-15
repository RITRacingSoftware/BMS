import SCons

import os
from pathlib import Path

"""
SCons entry point for f29bms project.
Contains build instructions for everything.

author: Chris Blust
"""
# setup static directory structure
SRC_DIR = REPO_ROOT_DIR.Dir('src')
APP_DIR = SRC_DIR.Dir('app')
DRIVER_DIR = SRC_DIR.Dir('driver')

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

modules = app_modules + driver_modules

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
for module_name, module_dir in modules:
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
Application Module compilation instructions.
Currently only supports linux compilation.
"""

# set up an environment to compile for linux
tool_paths = []
tool_paths.append(REPO_ROOT_DIR.Dir('libs/cmock/vendor/unity/src'))
tool_paths.append(REPO_ROOT_DIR.Dir('libs/cmock/src'))
module_path_names = []
for mod_name, mod_path in modules:
    module_path_names.append(mod_path)
linux_comp_env = Environment(
     # 'platform' is a handy argument provided by SCons that automatically sets a ton of env vars
    platform='posix',
    CPPPATH=module_path_names + mock_modules + tool_paths + [SRC_DIR.Dir('app').abspath, SRC_DIR.abspath]
)

# instructions to compile every application module
app_objects = {}
for module_name, module_dir in app_modules:
    module_name = module_dir.abspath.split('/')[-1]
    app_objects[module_name] = linux_comp_env.Object(module_dir.File(module_name + '.c'))

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

# instructions to compile every mock module
mock_objects = {}
for module_name, module_dir in modules:
    mock_objects[module_name] = linux_comp_env.Object(module_dir.File('mocks/Mock{}.c'.format(module_name)))

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
            test_objects[module_name], 
            app_objects[module_name]]
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

    
    
