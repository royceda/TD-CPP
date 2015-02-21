CC = g++
CPPFLAGS = -Wall -Wextra -std=c++0x

all: test  SmartExample

Chaine.o: Chaine.hpp

EleveVacataire.o:  EleveVacataire.hpp	

SmartExample.o: SmartPointer.hpp 

SmartPointer.o: SmartPointer.hpp 


SmartExample: SmartExample.o SmartPointer.o
	$(CC) $^ -o $@

clean:
	rm *.o test SmartExample
