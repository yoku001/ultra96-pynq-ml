############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_randomforest
set_top predict
add_files ../randomforest.c
open_solution "solution1"
set_part {xczu3eg-sbva484-1-i} -tool vivado
create_clock -period 10 -name default
#source "./directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
