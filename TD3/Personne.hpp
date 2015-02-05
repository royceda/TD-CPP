#ifndef __PERSONNE_HPP_
#define __PERSONNE_HPP_

#include "Chaine.hpp"
#include <cstdio>

namespace enseirb{

  class Personne{
  private:
    Chaine _nom;

  public:
    Personne();
    Personne(const Personne &);
    Personne(const Chaine &);

    Chaine nom() const;
    

    ~Personne(){}
  };
}
#endif
