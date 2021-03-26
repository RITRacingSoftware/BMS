
# Setting PATH for Python 3.

import csv
import can 
import cantools
import signal
from subprocess import call
call(["./sim/bmsModel/LogicalAccumulatorModel"])

filename = "file.blf"
log = can.BLFReader("file.blf")
log = list(log)

can_db = cantools.database.load_file('src/app/CAN/f29bms_dbc.dbc')
signals = {}

for msg in log:
    message = str(msg)
    id = message[38:42]
    message = message[74:97]
    signals.update(can_db.decode_message(msg.arbitration_id, msg.data))

#print(signals)

min_val = 1000000
max_val = -5
min_sig = 0
max_sig = 0
cells_too_low = []
cells_too_high = []
MAX_ALLOWED_CELL_V = 4.3
MIN_ALLOWED_CELL_V = 1.2
MAX_CELL_DIFF_V = 0.5

f = open("logicalAccumOutput300.txt", "w")

for sig in signals:
    if 'BmsFaultAlert_voltage_diff' in sig or 'BmsFaultAlert_lowest_cell_voltage' in sig:
        f.write('XXXXXXXXXXX' + str(signals[sig]))
    if 'BmsVoltages_Cell' in sig:
        if signals[sig] < min_val:
            min_sig = sig
            min_val = signals[sig]
        elif signals[sig] > max_val:
            max_sig = sig
            max_val = signals[sig]
        if signals[sig] < MIN_ALLOWED_CELL_V:
            cells_too_low.append((sig, signals[sig]))
        elif signals[sig] > MAX_ALLOWED_CELL_V:
            cells_too_high.append((sig, signals[sig]))

    f.write(sig +  ":\t" +str(signals[sig]))
    f.write("\n")

f.write("===================================================================\n")
f.write("max " + str(max_sig) + ": " +str(max_val) + "\n")
f.write("min " + str(min_sig)+ ": " +str(min_val)+ "\n")
f.write("difference: " + str(max_val - min_val)+ "\n")
f.write("too high: \n")
f.write(str(len(cells_too_high))+ "\n")
f.write("too low: \n")
f.write(str(len(cells_too_low))+ "\n")
