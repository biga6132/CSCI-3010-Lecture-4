CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall #flags

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

clean:
	rm main

