CC = g++
FLAG = -Wall -g


SmartExample: SmartExample.o SmartPointer.o Chaine.o
	$(CC) $(FLAG) $^ -o $@


SmartExample.o: SmartExample.cpp SmartPointer.hpp 

SmartPointer.o: SmartPointer.cpp SmartPointer.hpp 

Chaine.o: Chaine.cpp Chaine.hpp


clean: 
	rm -f SmartExample *~ *.o
