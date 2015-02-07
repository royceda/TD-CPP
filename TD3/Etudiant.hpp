#ifndef __ETUDIANT_HPP__
#define __ETUDIANT_HPP__

#include "Personne.hpp"
#include "Chaine.hpp"

namespace enseirb{

  class Etudiant: public virtual Personne{
  private:
    Chaine _filiere;
    Chaine _enseignement;

  public:
    Etudiant();
    Etudiant(const Etudiant &);
    Etudiant(const Chaine &, const Chaine &, const Chaine &);
    
    Chaine filiere() const;
    Chaine enseignement() const;
    Chaine nom()const;
    void setEnseignement(const Chaine &);

    ~Etudiant(){}

  };
}

#endif
