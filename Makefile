CXX = g++
CXXFLAGS = -O2 -Wall -shared -fPIC
PYTHON = python

.PHONY: hw
hw:
	$(PYTHON) main.py
	cd tcl && vivado_hls script.tcl

.PHONY: sw
sw:
	$(PYTHON) main.py
	$(CXX) $(CXXFLAGS) randomforest.cc -o randomforest.so

.PHONY: clean
clean:
	rm *.o *.log *.pkl

.PHONY: test
test: sw
	$(PYTHON) test.py