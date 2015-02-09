#include "CurseurClassique.hpp"


namespace enseirb{

  CurseurClassique::CurseurClassique(Chaine &a):
    Curseur(a){}


  void CurseurClassique::operator++(){
    if(!fini())
      _position++;
  }

  void CurseurClassique::operator--(){
    if(_position > 0)
    _position--;
  }

  bool CurseurClassique::fini(){
    if( _position == _chaine.taille())
      return true;
    else 
      return false;
  }

  void CurseurClassique::debut(){
    _position = 0;
  }
  
  void CurseurClassique::fin(){
    _position = _chaine.taille();
  }
}
