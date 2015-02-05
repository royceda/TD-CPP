CC = g++
CPPFLAGS = -Wall -Wextra -std=c++0x


all: Chaine.o Personne.o Etudiant.o Programme.o

Chaine.o: Chaine.hpp

Personne.o: Personne.hpp 

Programme.o: Personne.hpp

Etudiant.o: Etudiant.hpp

test: Chaine.o Personne.o Etudiant.o Programme.o
	$(CC) $^ -o $@
clean:
	rm *.o test
