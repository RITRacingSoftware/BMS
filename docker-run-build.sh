#! /bin/bash

docker rm f29bms
docker run --name f29bms -v $PWD:/f29bms f29bms './build.sh'
