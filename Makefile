all: main

main: main.o Array.o
	g++ main.o Array.o -o main -g
	
main.o: main.cpp Array.h
	g++ -c main.cpp -o main.o -std=c++11 -g
	
Array.o: Array.cpp Array.h
	g++ -c Array.cpp -o Array.o -std=c++11 -g
 
clean:
	rm *.o

