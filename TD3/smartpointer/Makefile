CC = g++
CPPFLAGS = -Wall -Wextra -std=c++0x -g

all: SmartExample

Chaine.o: Chaine.hpp

SmartExample.o: SmartPointer.hpp 

SmartPointer.o: SmartPointer.hpp 


SmartExample: SmartExample.o SmartPointer.o Chaine.o
	$(CC) $^ -o $@

clean:
	rm *.o test SmartExample
