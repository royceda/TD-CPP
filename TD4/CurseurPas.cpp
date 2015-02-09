#include "CurseurPas.hpp"


namespace enseirb{

  CurseurPas::CurseurPas(Chaine &a, int b, int e, int p):
    Curseur(a), begin(b), end(e), pas(p) {
    _position = 0;
  }


  void CurseurPas::operator++(){
    if(!fini())
      _position++;
  }

  void CurseurPas::operator--(){
    if(_position > 0)
    _position--;
  }

  bool CurseurPas::fini(){
    if( _position == _chaine.taille())
      return true;
    else 
      return false;
  }

  void CurseurPas::debut(){
    _position = 0;
  }
  
  void CurseurPas::fin(){
    _position = _chaine.taille();
  }
}
