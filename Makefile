CPP_FILES := $(wildcard src/*.cpp)
CPP_FILES += $(wildcard src/reactor/*.cpp)
CPP_FILES += $(wildcard src/deps/*.cpp)
CPP_FILES += $(wildcard src/deps/pagerank/*.cpp)

all:
	g++ -Wall -std=c++11 -stdlib=libc++ -o drake $(CPP_FILES) -Isrc
