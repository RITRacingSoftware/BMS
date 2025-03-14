#!/usr/bin/env bash

set -x

ELF=build/stm32/bms.elf

openocd -f ./openocd.cfg -c "program ${ELF} verify reset" -c "exit"