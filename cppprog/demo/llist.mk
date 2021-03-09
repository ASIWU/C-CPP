sources = *.cpp
target = llist

CXX = g++
cxxflags = -std=c++20 -Wall -g -fsanitize=address

all:
	$(CXX) $(sources) $(cxxflags) -o $(target)

clean:
	rm $(target)
