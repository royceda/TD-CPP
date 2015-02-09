CXX=g++
CXXFLAGS=-Wall -g 

Programme: Programme.o Chaine.o Curseur.o CurseurClassique.o CurseurInverse.o CurseurPas.o
	$(CXX) $(CXXFLAGS) $^ -o $@

Programme.o: Programme.cpp Chaine.hpp

Chaine.o: Chaine.cpp Chaine.hpp 

Curseur.o: Curseur.hpp

CurseurClassique.o: CurseurClassique.hpp

CurseurInverse.o: CurseurInverse.hpp

CurseurPas.o: CurseurPas.hpp

clean:
	rm Programme Programme.o Chaine.o
