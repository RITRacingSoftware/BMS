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
MATLAB_OBJS_PATH = ../bmsModel/LogicalAccumulatorModel_ert_rtw
MATLAB_OBJS = $(wildcard $(MATLAB_OBJS_PATH)/*.o)

MATLAB_ROOT = /usr/local/MATLAB/R2020a
START_DIR = ../bmsModel
INC_DIREC += -I$(START_DIR) -I$(START_DIR)/LogicalAccumulatorModel_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert

.PHONY : all clean
.SILENT :

all : $(SIMTARG)

$(BUILDPATH) :
	mkdir $(BUILDPATH)

$(SIMTARG) : $(BUILDPATH) $(COBJS) $(MATLAB_OBJS)
	-echo "Linking objects"
	$(LD) $(LDFLAGS) -o SimModel $(COBJS) $(MATLAB_OBJS) -Wl,--start-group -Wl,--end-group $(TOOLCHAIN_LIBS)

$(CSOURCESWILDCARD) : %.c
	-echo "Compiling Sim files: $*.c"
	$(CC) $(CFLAGS) $(INC_DIREC) -c $*.c -o $(BUILDPATH)$*.o

clean : 
	-rm -rf $(BUILDPATH)*
