#include "Chaine.hpp"
#include <cstdlib>
#include <cstdio>
#include <cstring>


using namespace std;
namespace enseirb{


  Chaine::Chaine():
    _taille(0), _donnees(NULL){ printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);}


  Chaine::Chaine(const char *c){
    _taille = strlen(c);
    _donnees = new char[taille()+1];
    strcpy(_donnees, c);
  }


  char Chaine::get(unsigned int i)const{
    return _donnees[i];
  }

  unsigned int Chaine::taille(){
    return _taille;
  }


  Chaine::~Chaine(){
    if(_donnees)
      delete[] _donnees;
    printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
  }
}
