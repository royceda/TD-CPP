#include "Personne.hpp"



namespace enseirb{

  Personne::Personne():_nom(""){}
  Personne::Personne(const Chaine &c): 
    _nom(c) {printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}
  Personne::Personne(const Personne &P):
    _nom(P.nom()) {printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}
  
  Chaine Personne::nom()const{
    return _nom;
  }
} 
