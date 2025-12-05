#!/bin/bash

docker build -t playground .

docker run --rm -it \
    -v "$(pwd)":/app \
    playground \
    bash -c "mkdir -p build && cd build && cmake -DTARGET_HOST=ON .. && make -j &&  ctest"
    #bash -c "g++ app/hello.cpp"