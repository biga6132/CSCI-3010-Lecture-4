CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall #flags

all: test


test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

clean:
	rm  test

