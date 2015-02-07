CC = g++
CPPFLAGS = -Wall -Wextra -std=c++0x

all: test  SmartExample

Chaine.o: Chaine.hpp

Personne.o: Personne.hpp 

Programme.o: Personne.hpp

Etudiant.o: Etudiant.hpp

Enseignant.o: Enseignant.hpp

EleveVacataire.o:  EleveVacataire.hpp	

SmartExample.o: SmartPointer.hpp 

SmartPointer.o: SmartPointer.hpp 


test: Chaine.o Personne.o Etudiant.o Enseignant.o EleveVacataire.o Programme.o
	$(CC) $^ -o $@

SmartExample: SmartExample.o SmartPointer.o
	$(CC) $^ -o $@

clean:
	rm *.o test SmartExample
