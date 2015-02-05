all: Chaine.o Programme.o Programme

Chaine.o: Chaine.hpp
	g++ -Wall -c Chaine.cpp -o Chaine.o

Programme.o: Chaine.o
	g++ -Wall -c Chaine.o Programme.cpp -o Programme.o

Programme:  Chaine.o Programme.o
	g++ -Wall Chaine.o Programme.o -o test

clean:
	rm *.o
