#ifndef CURSEUR_CLASSIQUE_HPP
#define CURSEUR_CLASSIQUE_HPP

#include "Curseur.hpp"

namespace enseirb{
  
  class CurseurClassique: public Curseur{
  private:
    
  public:
    
    CurseurClassique(Chaine &);


    void operator++ () ;
    void operator-- () ;

    bool fini();
    void debut();
    void fin();

   
  
    
    ~CurseurClassique() {};

  };
}
#endif
