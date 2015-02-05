CC = g++
CPPFLAGS = -Wall -Wextra -std=c++0x


all: Chaine.o Personne.o Etudiant.o Enseignant.o Programme.o test

Chaine.o: Chaine.hpp

Personne.o: Personne.hpp 

Programme.o: Personne.hpp

Etudiant.o: Etudiant.hpp

Enseignant.o: Enseignant.hpp

EleveVacataire.o:  EleveVacataire.hpp	

test: Chaine.o Personne.o Etudiant.o Enseignant.o EleveVacataire.o Programme.o
	$(CC) $^ -o $@

clean:
	rm *.o test
