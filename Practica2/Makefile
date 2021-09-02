#Makefile para compilar la Practica 2.
#Estrada Escobedo Juan Ramón

prueba: main.o
	g++ -std=c++17 -pedantic-errors -Wall -o prueba.exe main.o

main.o: main.cpp
	g++ -c main.cpp

#Borrar todos los archivos .o
clear:
	rm -f *.o