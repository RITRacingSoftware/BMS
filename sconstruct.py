import SCons

"""
SCons entry point for f29bms project. Uses subsidiary sconscripts to 
aggregate instructions on building all project artifacts.

author: Chris Blust
"""
# some initial setup
SRC_DIR = REPO_ROOT_DIR.Dir('src')
APP_DIR = SRC_DIR.Dir('app')

# Application code
SConscript(APP_DIR.File('sconscript.py'))