#ifndef __ELEVE_VACATAIRE_HPP__
#define __ELEVE_VACATAIRE_HPP__

#include "Etudiant.hpp"
#include "Enseignant.hpp"

namespace enseirb{

  
  class EleveVacataire: public Etudiant,
			public Enseignant{
  private:
    

  public:
    EleveVacataire();
    EleveVacataire(const Chaine &, const Chaine &, const Chaine &, const Chaine &,  int);
    
   
    const Chaine nom();

    ~EleveVacataire(){};
  };
}
#endif
