#! /bin/bash

docker run --name f29bms -v $PWD:/f29bms:delegated f29bms './build.sh'
