#ifndef CURSEUR_CLASSIQUE_HPP
#define CURSEUR_CLASSIQUE_HPP

#include "Curseur.hpp"

namespace enseirb{
  
  class CurseurPas: public Curseur{
  private:
    unsigned int begin;
    unsigned int end;
    unsigned int pas;

  public:
    
    CurseurPas(Chaine &a, int b, int e, int p);


    void operator++ () ;
    void operator-- () ;

    bool fini();
    void debut();
    void fin();

   
  
    
    ~CurseurPas() {};

  };
}
#endif
