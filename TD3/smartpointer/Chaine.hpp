#ifndef CHAINE_HPP
#define CHAINE_HPP

#include "SmartPointer.hpp"

namespace enseirb {

  class Chaine {
  private:
    SmartPointer _donnees;
    unsigned int _taille;

  public:
    Chaine();
    Chaine(const char*);
    Chaine(const Chaine &);
    ~Chaine();
    const Chaine &operator=(const Chaine &);

    unsigned int taille() const ;
    char operator[](unsigned int i) const;
    Chaine operator+(const Chaine &) const;
  };
}

#endif
