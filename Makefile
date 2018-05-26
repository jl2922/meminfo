CXX := g++
CXXFLAGS := -std=c++11 -O3

all: test

clean:
	rm -f *.o
	rm -f meminfo_test

test: meminfo_test
	./meminfo_test

meminfo_test: meminfo.o meminfo_test.cc
	$(CXX) $(CXXFLAGS) $^ -o $@

meminfo.o: meminfo.cc meminfo.h
	$(CXX) $(CXXFLAGS) -c $< -o $@
