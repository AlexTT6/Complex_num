main: main.o ComplexNum.o
	g++  main.o -o main ComplexNum.o
ComplexNum.o: ComplexNum.h ComplexNum.cpp
		g++ ComplexNum.cpp -c
main.o: main.cpp ComplexNum.h
	g++ main.cpp -c
