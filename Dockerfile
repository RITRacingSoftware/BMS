FROM ubuntu:20.04

USER root

WORKDIR /f29bms

# Move everything in the f29bms folder to the docker container file system
COPY . /f29bms/

# disable prompts during apt-get
ENV DEBIAN_FRONTEND=noninteractive

# Install required tools
RUN apt-get update
RUN apt-get install -y \
pkg-config \
python3.8 \
python3-pip \ 
ruby \
gcc-arm-none-eabi \
valgrind \
git \
python3.8-dev \
cmake \
doxygen \
gdb-multiarch \
sudo

# 'scons' command uses 'python' not 'python3.8', so make a symlink for it to use
RUN ln -s /usr/bin/python3.8 /usr/bin/python

# Install required python modules
RUN python3.8 -m pip install -r requirements.txt
