CC = gcc
LD = g++
MATLAB_ARCH_BIN = $(MATLAB_BIN)/glnxa6
LDDEBUG = -g
LDFLAGS = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" \
                       $(LDDEBUG)
CFLAGS = -O0 -fwrapv -std=c99 -pedantic
CSOURCES = main.c
empty :=
space += $(empty) $(empty)
BUILDPATH = build/
COBJSTemp := $(patsubst %.c,%.o, $(CSOURCES))
COBJS = $(subst $(space), $(BUILDPATH), $(COBJSTemp))
SIMTARG = sim
CSOURCESWILDCARD = $(BUILDPATH)%.o
MATLAB_OBJS_PATH = ../bmsModel/AccumulatorModel_grt_rtw
MATLAB_OBJS = $(wildcard $(MATLAB_OBJS_PATH)/*.o)
MATLAB_ROOT = /usr/local/MATLAB/R2020a
INC_DIREC += -I../bmsModel/AccumulatorModel_grt_rtw/
#INC_DIREC += -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64
INC_DIREC += -I$(START_DIR) -I$(START_DIR)/AccumulatorModel_grt_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/glnxa64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/glnxa64

#LIBS = /usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/sli/lib/glnxa64/ssc_sli_ert.a /usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/core/lib/glnxa64/ssc_core_ert.a /usr/local/MATLAB/R2020a/toolbox/physmod/network_engine/lib/glnxa64/ne_ert.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/math/core/lib/glnxa64/mc_ert.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/external/library/lib/glnxa64/ex_ert.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/foundation/core/lib/glnxa64/pm_ert.a
LIBS = /usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/sli/lib/glnxa64/ssc_sli_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/simscape/engine/core/lib/glnxa64/ssc_core_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/network_engine/lib/glnxa64/ne_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/math/core/lib/glnxa64/mc_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/external/library/lib/glnxa64/ex_std.a /usr/local/MATLAB/R2020a/toolbox/physmod/common/foundation/core/lib/glnxa64/pm_std.a
SYSTEM_LIBS =  -lm

.PHONY : all clean
.SILENT :

all : $(SIMTARG)

$(BUILDPATH) :
	mkdir $(BUILDPATH)

$(SIMTARG) : $(BUILDPATH) $(COBJS) $(MATLAB_OBJS)
	-echo "Linking objects"
#	cd $(MATLAB_OBJS_PATH)/
#	make -f AccumulatorModel.mk buildobj
#	cd ../simServer/
	$(LD) $(LDFLAGS) -o SimModel $(COBJS) $(MATLAB_OBJS) -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	#$(CC) $(COBJS) $(MATLAB_OBJS) -o $(BUILDPATH)$(SIMTARG)

OtherTarg : $(BUILDPATH) $(COBJS)

$(CSOURCESWILDCARD) : %.c
	-echo "Compiling Sim files: $*.c"
	$(CC) $(CFLAGS) $(INC_DIREC) -c $*.c -o $(BUILDPATH)$*.o

clean : 
	-rm -rf $(BUILDPATH)*
