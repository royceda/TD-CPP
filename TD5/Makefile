CC = g++
FLAG = -Wall -g


SmartExample: SmartExample.o Chaine.o
	$(CC) $(FLAG) $^ -o $@

SmartExample.o: SmartExample.cpp SmartPointer.hpp 

SmartPointer.o: SmartPointer.hpp 
	g++ -c SmartPointer.hpp -o SmartPointer.o

Chaine.o: Chaine.cpp Chaine.hpp


clean: 
	rm -f SmartExample *~ *.o
