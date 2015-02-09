#include "Curseur.hpp"

namespace enseirb{

  Curseur::Curseur(Chaine &a, int b):
    _chaine(a), _position(b){}
    

  char Curseur::operator* ()const{
    return _chaine[_position];
  }
}
