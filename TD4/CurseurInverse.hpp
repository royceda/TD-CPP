#ifndef CURSEUR_INVERSE_HPP
#define CURSEUR_INVERSE_HPP

#include "Curseur.hpp"

namespace enseirb{
  
  class CurseurInverse: public Curseur{
  private:
    
  public:
    
    CurseurInverse(Chaine &);

    void operator++ () ;
    void operator-- () ;

    bool fini();
    void debut();
    void fin();
    
    ~CurseurInverse() {};

  };
}
#endif
