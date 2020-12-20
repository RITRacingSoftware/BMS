import SCons
import scons_constants

"""
Custom build tools for SCons to use.
author: Chris Blust
"""

REPO_ROOT_DIR = Dir('.')

DBCC_DIR = REPO_ROOT_DIR.Dir('libs/dbcc')

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

def TOOL_ARM_ELF_HEX(env):
    """
    Uses arm toolchain to generate elf or hex files from compiled code.
    """

    """
    Description of command below:
    -mcpu=cortex-m0: the cortex-m0 is our microprocessor. This tells the compiler to use its instruction set
    --specs=nosys.specs: this removes a default spec that tries to compile a wrapper layer of sorts for linux debugging 
    (will get error looking for _exit function if removed)

    SOURCE must be a list of strings
    """
    arm_elf_builder = SCons.Builder.Builder(action=[
        scons_constants.ARM_CC + ' -mcpu=cortex-m0 --specs=nosys.specs ${SOURCE.abspath} -o ${TARGET.abspath}'
    ])

    arm_hex_builder = SCons.Builder.Builder(action=[
        scons_constants.ARM_OBJCOPY + ' -O ihex -j .text -j .data ${SOURCE.abspath} ${TARGET.abspath}'
    ])

    env.Append(BUILDERS = {
        'BuildElf' : arm_elf_builder,
        'BuildHex' : arm_hex_builder
    })


def TOOL_DBCC(env):
    """
    Uses the dbcc tool to generate C code for setting/getting CAN data
    from a dbc file.
    """

    """
    SOURCE - dbc file node
    TARGET - c file node that will be generated. The directory of this file will be used in the command.
    """
    dbcc_builder = SCons.Builder.Builder(action=[
        DBCC_DIR.abspath + '/dbcc -o ${TARGET.dir.abspath} ${SOURCE}'
    ])

    env.Append(BUILDERS = {
        'GenerateDbcSource' : dbcc_builder
    })

def TOOL_VALGRIND(env):
    """
    Runs a valgrind memory check on a linux program.
    """

    """
    SOURCE = binary node
    TARGET = text results file
    """
    env['SHELL'] = 'bash'


    valgrind_memcheck_builder = SCons.Builder.Builder(action=[
        'valgrind --tool=memcheck --leak-check=yes --track-origins=yes ${SOURCE.abspath} 2>&1 | tee ${TARGET} && test $$PIPESTATUS -eq 0'
    ])

    env.Append(BUILDERS = {
        'MemCheck' : valgrind_memcheck_builder
    })
    
def TOOL_PROTOC(env):
    """
    Uses nanopb protoc compiler to generate pb-h.h and pb-c.c files.
    """

    NANOPB_DIR = REPO_ROOT_DIR.Dir('libs/nanopb/generator')

    protoc_builder = SCons.Builder.Builder(action=[
        #'cd ${SOURCE.dir.abspath} ' + 
        scons_constants.PYTHON + ' ' + NANOPB_DIR.abspath + '/nanopb_generator.py ${SOURCE} --strip-path'
    ])

    env.Append(BUILDERS = {
        'GeneratePbSource' : protoc_builder
    })

def TOOL_PYTEST(env):
    """
    Uses pytest module to run pytests
    """

    pytest_builder = SCons.Builder.Builder(action=[
        scons_constants.PYTHON + ' -m pytest -s ${SOURCE.abspath}'
    ])

    env.Append(BUILDERS = {
        'RunTestFile' : pytest_builder
    })