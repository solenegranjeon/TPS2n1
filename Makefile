all: main

main: main.o RandomArray.o Array.o Complex.o RandomWalk.o Fractal.o
	g++ main.o Array.o RandomArray.o Complex.o RandomWalk.o Fractal.o -o main -g
	
main.o: main.cpp Array.h Complex.h RandomArray.h Fractal.h
	g++ -c main.cpp -o main.o -std=c++11 -g
	
Array.o: Array.cpp Array.h
	g++ -c Array.cpp -o Array.o -std=c++11 -g
	
RandomArray.o: RandomArray.cpp Array.h RandomArray.h
	g++ -c RandomArray.cpp -o RandomArray.o -std=c++11 -g
	
RandomWalk.o: RandomWalk.cpp Array.h RandomWalk.h
	g++ -c RandomWalk.cpp -o RandomWalk.o -std=c++11 -g
	
Complex.o: Complex.cpp Complex.h
	g++ -c Complex.cpp -o Complex.o -std=c++11 -g
	
Fractal.o: Fractal.cpp Fractal.h
	g++ -c Fractal.cpp -o Fractal.o -std=c++11 -g

clean:
	rm *.o
