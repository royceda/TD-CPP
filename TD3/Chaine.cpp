#include<cstring>

#include "Chaine.hpp"
#include <cstring>
#include <memory>


namespace enseirb {

  static SmartPointer copie(const char* src) {
    SmartPointer tmp(src);
    //std::strcpy(tmp, src);
    return tmp;
  } 
  
  Chaine::Chaine() {
    _taille  = 0;
    _donnees = copie("");
  }

  
  Chaine::Chaine(const char *s) {
    // Cas s==NULL a gerer plus tard.  
    _donnees = copie(s);
    _taille  = strlen(s);
    // SmartPointer _donnees(s);
  }
  
  Chaine::~Chaine() {  }

  
  Chaine::Chaine(const Chaine &c):_taille(c._taille){
    _donnees = c._donnees;
  }
  
  const Chaine &Chaine::operator=(const Chaine &c){
    if (this == &c) 
      return *this;

    //delete _donnees;

    _taille  = c._taille;
    _donnees = c._donnees;
    return *this;
  }

  
  unsigned int Chaine::taille() const {
    return _taille;
  }
  
  char Chaine::operator[](unsigned int i) const{
    if (i>_taille) 
      return '\0';
    return (_donnees.operator->())[i];
  }
  

  Chaine Chaine::operator+(const Chaine &c) const {
    int tailleTmp = _taille + c._taille;
    
    if (this == &c) 
      return *this;

    if (0 == tailleTmp)
      return *this;

    const char *tmp((const char*)_donnees);
    const char *tmp1((const char*)c._donnees);
    //strcat(tmp, tmp1);

    return Chaine(tmp);

    /*
    char *donneesTmp = new char[tailleTmp + 1];
    std::unique_ptr<char []> autoDelete(donneesTmp);

    if (_taille != 0)
      std::strcpy(donneesTmp, _donnees);

    if (c._taille !=0)
      std::strcpy(donneesTmp + _taille, c._donnees);
  
      return Chaine(donneesTmp);*/

    }
}
