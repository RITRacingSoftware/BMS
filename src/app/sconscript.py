import SCons

import os
from pathlib import Path

"""
Instructions for building application modules, building
application unit tests, and running application unit tests.
author: Chris Blust
"""

APP_DIR = Dir('.')

env = Environment(
    tools=[TOOL_CMOCK]
)

modules = []

# Get list of module directory names
for directory in (d for d in Path(str(APP_DIR)).iterdir() if d.is_dir()):
    modules.append(str(directory))

# CMock generated code
cmock_generated = []
for module in modules:
    module_dir = APP_DIR.Dir(module)
    mocks_dir = module_dir.Dir('mocks')
    cmock_header = env.CMock(
           source=module_dir.File(module + '.h'),
           target=mocks_dir
        )
    cmock_generated += cmock_header
    Clean(cmock_header, mocks_dir)

Alias('cmock', cmock_generated)

Return('cmock_generated')