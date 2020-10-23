###########################################################################
## Makefile generated for Simulink model 'AccumulatorModel'. 
## 
## Makefile     : AccumulatorModel.mk
## Generated on : Sat Oct 17 03:56:27 2020
## MATLAB Coder version: 5.0 (R2020a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/AccumulatorModel
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = AccumulatorModel
MAKEFILE                  = AccumulatorModel.mk
MATLAB_ROOT               = /usr/local/MATLAB/R2020a
MATLAB_BIN                = /usr/local/MATLAB/R2020a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
MASTER_ANCHOR_DIR         = 
START_DIR                 = /home/sean/Documents/Formula/F29/f29bms/sim/bmsModel
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = -fwrapv -std=c99 -pedantic
CPP_STANDARD_OPTS         = -fwrapv -std=c++98 -pedantic -Wno-long-long
LIBSSC_SLI_STD_OBJS       = 
LIBSSC_CORE_STD_OBJS      = 
LIBNE_STD_OBJS            = 
LIBMC_STD_OBJS            = 
LIBEX_STD_OBJS            = 
LIBPM_STD_OBJS            = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU gcc/g++ | gmake (64-bit Linux)
# Supported Version(s):    
# ToolchainInfo Version:   2020a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS         = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX     = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS     = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC = gcc

# Linker: GNU Linker
LD = g++

# C++ Compiler: GNU C++ Compiler
CPP = g++

# C++ Linker: GNU C++ Linker
CPP_LD = g++

# Archiver: GNU Archiver
AR = ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(C_STANDARD_OPTS) -fPIC \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -fPIC \
                       -O3 -fno-loop-optimize -fno-aggressive-loop-optimizations
CPP_LDFLAGS          = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)"
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)"
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/AccumulatorModel
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/AccumulatorModel_grt_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=AccumulatorModel -DNUMST=2 -DNCSTATES=325 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_zc.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_tdxy_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxy_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_il.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_all.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_act.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_exp.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_mode.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_vmm.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxm.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_m_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxm_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_log.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_tdxf_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_m.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_a_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_a.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_tduf_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxf_p.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_vmf.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_ic.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxf.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_f.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_duf.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_assert.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_gateway.c $(START_DIR)/AccumulatorModel_grt_rtw/pm_printf.c $(START_DIR)/AccumulatorModel_grt_rtw/rt_backsubrr_dbl.c $(START_DIR)/AccumulatorModel_grt_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/AccumulatorModel_grt_rtw/rt_lu_real.c $(START_DIR)/AccumulatorModel_grt_rtw/rt_matrixlib_dbl.c $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel.c

MAIN_SRC = $(MATLAB_ROOT)/rtw/c/src/common/rt_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = AccumulatorModel_afee0aca_1_ds.o AccumulatorModel_afee0aca_1_ds_zc.o AccumulatorModel_afee0aca_1_ds_tdxy_p.o AccumulatorModel_afee0aca_1_ds_dxy_p.o AccumulatorModel_afee0aca_1_ds_obs_il.o AccumulatorModel_afee0aca_1_ds_obs_all.o AccumulatorModel_afee0aca_1_ds_obs_act.o AccumulatorModel_afee0aca_1_ds_obs_exp.o AccumulatorModel_afee0aca_1_ds_mode.o AccumulatorModel_afee0aca_1_ds_vmm.o AccumulatorModel_afee0aca_1_ds_dxm.o AccumulatorModel_afee0aca_1_ds_m_p.o AccumulatorModel_afee0aca_1_ds_dxm_p.o AccumulatorModel_afee0aca_1_ds_log.o AccumulatorModel_afee0aca_1_ds_tdxf_p.o AccumulatorModel_afee0aca_1_ds_m.o AccumulatorModel_afee0aca_1_ds_a_p.o AccumulatorModel_afee0aca_1_ds_a.o AccumulatorModel_afee0aca_1_ds_tduf_p.o AccumulatorModel_afee0aca_1_ds_dxf_p.o AccumulatorModel_afee0aca_1_ds_vmf.o AccumulatorModel_afee0aca_1_ds_ic.o AccumulatorModel_afee0aca_1_ds_dxf.o AccumulatorModel_afee0aca_1_ds_f.o AccumulatorModel_afee0aca_1_ds_duf.o AccumulatorModel_afee0aca_1_ds_assert.o AccumulatorModel_afee0aca_1.o AccumulatorModel_afee0aca_1_gateway.o pm_printf.o rt_backsubrr_dbl.o rt_forwardsubrr_dbl.o rt_lu_real.o rt_matrixlib_dbl.o AccumulatorModel.o

MAIN_OBJ = rt_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = /usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/sli/lib/glnxa64/ssc_sli_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/core/lib/glnxa64/ssc_core_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/network_engine/lib/glnxa64/ne_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/math/core/lib/glnxa64/mc_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/external/library/lib/glnxa64/ex_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/foundation/core/lib/glnxa64/pm_std.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  -lm

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/AccumulatorModel_grt_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/AccumulatorModel_grt_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_zc.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_zc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_tdxy_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_tdxy_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_dxy_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxy_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_obs_il.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_il.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_obs_all.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_all.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_obs_act.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_act.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_obs_exp.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_mode.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_mode.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_vmm.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_vmm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_dxm.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_m_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_m_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_dxm_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxm_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_log.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_log.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_tdxf_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_m.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_m.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_a_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_a_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_a.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_a.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_tduf_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_tduf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_dxf_p.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_vmf.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_vmf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_ic.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_ic.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_dxf.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_dxf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_f.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_duf.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_duf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_ds_assert.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_ds_assert.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel_afee0aca_1_gateway.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel_afee0aca_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


pm_printf.o : $(START_DIR)/AccumulatorModel_grt_rtw/pm_printf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.o : $(START_DIR)/AccumulatorModel_grt_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.o : $(START_DIR)/AccumulatorModel_grt_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.o : $(START_DIR)/AccumulatorModel_grt_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.o : $(START_DIR)/AccumulatorModel_grt_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


AccumulatorModel.o : $(START_DIR)/AccumulatorModel_grt_rtw/AccumulatorModel.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_main.o : $(MATLAB_ROOT)/rtw/c/src/common/rt_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/sli/lib/glnxa64/ssc_sli_std.a : $(LIBSSC_SLI_STD_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_STD_OBJS)


/usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/core/lib/glnxa64/ssc_core_std.a : $(LIBSSC_CORE_STD_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_STD_OBJS)


/usr/local/MATLAB/R2020a/toolbox/physmod/network_engine/lib/glnxa64/ne_std.a : $(LIBNE_STD_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBNE_STD_OBJS)


/usr/local/MATLAB/R2020a/toolbox/physmod/common/math/core/lib/glnxa64/mc_std.a : $(LIBMC_STD_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_STD_OBJS)


/usr/local/MATLAB/R2020a/toolbox/physmod/common/external/library/lib/glnxa64/ex_std.a : $(LIBEX_STD_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_STD_OBJS)


/usr/local/MATLAB/R2020a/toolbox/physmod/common/foundation/core/lib/glnxa64/pm_std.a : $(LIBPM_STD_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_STD_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


