#include "Etudiant.hpp"
#include <cstdio>

namespace enseirb{

  Etudiant::Etudiant():
    Personne(""), _filiere(""), _enseignement(""){
    printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}
  
  Etudiant::Etudiant(const Etudiant &s):
    Personne(s.nom()), _filiere(s.filiere()), _enseignement(s.enseignement()) {
    printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}
  
  Etudiant::Etudiant(const Chaine &a, const Chaine &b, const Chaine &c):
    Personne(a), _filiere(b), _enseignement(c){
    printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}



  Chaine Etudiant::filiere() const{
    return _filiere;
  }

  Chaine Etudiant::enseignement() const{
    return _enseignement;
  }

  void Etudiant::setEnseignement(const Chaine &s){
    _enseignement = s;
    }
}
