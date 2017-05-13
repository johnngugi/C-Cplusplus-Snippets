# make is a utility that outomates compilation
# it is invoked with "make" at the os prompt

arithmetic: arithmetic.o add.o subtract.o
	g++ arithmetic.o add.o subtract.o -o run

arithmetic.o: arithmetic.cpp add.h subtract.h
	g++ -c -Wall arithmetic.cpp

add.o: add.cpp add.h
	g++ -c -Wall add.cpp

subtract.o: subtract.cpp subtract.h
	g++ -c -Wall subtract.cpp