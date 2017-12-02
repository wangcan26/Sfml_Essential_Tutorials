#!/bin/bash

cd build
cmake  -DCMAKE_INSTALL_PREFIX="./output" -G "CodeLite - Unix Makefiles" ..
