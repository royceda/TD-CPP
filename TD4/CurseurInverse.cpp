#include "CurseurInverse.hpp"


namespace enseirb{

  CurseurInverse::CurseurInverse(Chaine &a):
    Curseur(a){
    _position = a.taille();
  }


  void CurseurInverse::operator++(){
    if(!fini())
      _position--;
  }

  void CurseurInverse::operator--(){
    if(_position <  _chaine.taille())
    _position++;
  }

  bool CurseurInverse::fini(){
    if( _position == 0)
      return true;
    else 
      return false;
  }

  void CurseurInverse::fin(){
    _position = 0;
  }
  
  void CurseurInverse::debut(){
    _position = _chaine.taille();
  }
}
