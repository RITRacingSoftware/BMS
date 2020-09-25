import os
import sys

"""
DBCC is great but it doesn't give us parameterized idess values.
This script reads through the dbc file and writes a C header with a #define
for each CAN idess.

Usage: python3 gen_can_header_from_dbc.py <dbc file path> <c header output path>
"""

# file to read from 
dbc_file = None

# file to write
c_header_file_name = None

if len(sys.argv) != 3:
    print("Usage: python3 gen_can_header_from_dbc.py <dbc file path> <c header output path>")

dbc_file_name = sys.argv[1]
c_header_file_name = sys.argv[2]

# read thru the dbc file and get a list of message names and ids
id_name_tuples = []
with open(dbc_file_name, "r") as dbc_file:
    for line in dbc_file:
        # if this line is a message definition
        if line[0:3] == "BO_":
            # dig the string apart to get the message id
            fields = line.split(' ')
            can_id = int(fields[1])
            message_name = fields[2][0:len(fields[2])-1] # get rid of the ':' at the end
            id_name_tuples.append((can_id, message_name))
            
# write out some C
with open(c_header_file_name, "w") as c_header:
    # get that include guard down
    c_header.write("#ifndef CAN_IDS_H\n")
    c_header.write("#define CAN_IDS_H\n")
    c_header.write("\n")
    
    # now write the defines
    for id_name in id_name_tuples:
        c_header.write("#define CAN_ID_{} {}\n".format(id_name[1], id_name[0]))
    
    c_header.write("\n")
    c_header.write("#endif // CAN_IDS_H\n")
