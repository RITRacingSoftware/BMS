#! /bin/bash

docker rm f29bms
docker run -it -v $PWD:/f29bms f29bms