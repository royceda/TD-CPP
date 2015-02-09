#include "Curseur.hpp"

namespace enseirb{

  Curseur::Curseur(Chaine &a):
    _chaine(a){
    _position = 0;
  }
    

  char Curseur::operator* ()const{
    return _chaine[_position];
  }
}
