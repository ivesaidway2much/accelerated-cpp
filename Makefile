SHELL=/bin/bash
CXX=g++
CC=g++
CXXFLAGS=-g

all:        ex-5_1

Rotation.o: Rotation.cpp Rotation.h

ex-5_1.o:   ex-5_1.cpp Rotation.h

ex-5_1:     ex-5_1.o Rotation.o

clean:	    
	    rm *.o ex-5_1





