import SCons
"""
Custom build tools for SCons to use.
author: Chris Blust
"""

# First define some useful constants
REPO_ROOT_DIR = Dir('.')

def TOOL_CMOCK(env):
    """
    Uses cmock.rb to generate cmock headers for a module.
    """
    # cmock ruby scripts are here
    CMOCK_SCRIPT_DIR = REPO_ROOT_DIR.Dir('libs/cmock/lib')
    
    CMOCK_CONFIG_FILE = REPO_ROOT_DIR.File('site_scons/cmock_config.yml')

    # build the command to run cmock from the SOURCE parameter
    cmock_header_builder = SCons.Builder.Builder(action=[
        'cd ' + '${SOURCE.dir.abspath}' + ' &&' +
        'ruby ' + CMOCK_SCRIPT_DIR.abspath + '/cmock.rb ' + '-o' + CMOCK_CONFIG_FILE.abspath + ' ${SOURCE.abspath}'
    ])

    # cmock test generation script is in unity repo for some reason
    CMOCK_TESTGEN_DIR = REPO_ROOT_DIR.Dir('libs/cmock/vendor/unity/auto/')
    
    # run ruby script from unity repo to generate unit test runner from unit test source file
    cmock_testrunner_builder = SCons.Builder.Builder(action=[
        'cd ${SOURCE.dir.abspath} && ruby ' + CMOCK_TESTGEN_DIR.abspath + '/generate_test_runner.rb ${SOURCE.abspath} ${TARGET.abspath}'
    ])

    # the string keys here are the functions called to use each builder
    env.Append(BUILDERS = {
        'GenerateMocks' : cmock_header_builder,
        'GenerateTestRunner' : cmock_testrunner_builder
    })

