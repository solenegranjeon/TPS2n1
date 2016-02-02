all: main

main: main.o RandomArray.o Array.o Complex.o
	g++ main.o Array.o RandomArray.o Complex.o -o main -g
	
main.o: main.cpp Array.h Complex.h RandomArray.h
	g++ -c main.cpp -o main.o -std=c++11 -g
	
Array.o: Array.cpp Array.h
	g++ -c Array.cpp -o Array.o -std=c++11 -g
	
RandomArray.o: RandomArray.cpp Array.h RandomArray.h
	g++ -c RandomArray.cpp -o RandomArray.o -std=c++11 -g
	
Complex.o: Complex.cpp Complex.h
	g++ -c Complex.cpp -o Complex.o -std=c++11 -g

clean:
	rm *.o
