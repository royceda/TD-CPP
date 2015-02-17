#ifndef CHAINE_HPP
#define CHAINE_HPP

#include "SmartPointer.hpp"


class Chaine {
private:
  unsigned int _taille;
  char* _donnees;
  
  void release();

public:
  Chaine();
  Chaine(const char*);
  
public:
  Chaine(const Chaine& s);
  ~Chaine();
  Chaine& operator=(const Chaine& );
  
public:
  unsigned int taille() const;
  char operator[](int indice) const;
  operator char const *(void) const;
};

#endif

