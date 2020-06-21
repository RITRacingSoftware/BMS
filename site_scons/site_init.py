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
    CMOCK_SCRIPT_DIR = REPO_ROOT_DIR.Dir('cmock/lib')

    cmock_builder = SCons.Builder.Builder(action=[
        'cd ' + '${SOURCE.dir.abspath}' + ' &&' +
        'ruby ' + CMOCK_SCRIPT_DIR.abspath + '/cmock.rb ' + '${SOURCE.abspath}'
    ])

    env.Append(BUILDERS = {'CMock' : cmock_builder})
#+ '--mock_path=${TARGET.abspath} '

