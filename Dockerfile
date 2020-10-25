FROM ubuntu:19.10
WORKDIR /f29bms

# Move everything in the f29bms folder to the docker container file system
COPY . /f29bms/

# Install required tools
RUN apt-get update
RUN apt-get install -y \
python3.8 \
python3-pip \ 
ruby \
gcc-arm-none-eabi \
valgrind

# 'scons' command uses 'python' not 'python3.8', so make a symlink for it to use
RUN ln -s /usr/bin/python3.8 /usr/bin/python

# Install required python modules
RUN python3.8 -m pip install -r requirements.txt