#ifndef __ENSEIGNANT_HPP__
#define __ENSEIGNANT_HPP__

#include "Personne.hpp"
#include "Chaine.hpp"

namespace enseirb{

  class Enseignant: public virtual Personne{
  
  private:
    Chaine _service;
    int    _nbHeure;

  public:
    Enseignant();
    Enseignant(const Enseignant &);
    Enseignant(const Chaine &, const Chaine &, int );


    int nbHeure()const;
    const Chaine service()const;
    const Chaine nom();


    ~Enseignant(){};
  };
}
#endif
