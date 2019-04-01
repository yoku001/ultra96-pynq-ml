CXX = g++
CXXFLAGS = -O2 -Wall
PYTHON = python

.PHONY: hw
hw:
	$(PYTHON) main.py
	cd tcl && vivado_hls script.tcl

.PHONY: sw
sw:
	$(PYTHON) main.py
	$(CXX) -c randomforest.cc

.PHONY: clean
clean:
	rm *.o *.log *.pkl
