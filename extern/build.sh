#!/bin/bash

# Big TODO

for cmake_lib in catch2 reproc; do
  pushd $cmake_lib
    mkdir build
    pushd build
      cmake -DREPROC++=ON ..
      make -j2
      make DESTDIR=../../../vendor install
    popd
  popd
done