#!/usr/bin/env bash
REQUIRE_SAMPLE_REUSE=0
PPATH=$(realpath ..)

. ../../testdata_tools/gen.sh

ulimit -s unlimited

use_solution ../printnothing.cpp

compile generate.py

group group1 100
tc g1-1 generate n=100
tc g1-2 generate n=100
tc g1-3 generate n=100
tc g1-4 generate n=100
tc g1-5 generate n=100
tc g1-6 generate n=100
tc g1-7 generate n=100
tc g1-8 generate n=100
tc g1-9 generate n=100

