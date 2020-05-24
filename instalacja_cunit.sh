#!/bin/bash

cd tmp
tar -xvf CUnit-2.1-2-src.tar
cd CUnit-2.1-2
./configure --prefix=/usr
make
sudo make install
