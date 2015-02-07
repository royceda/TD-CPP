#include "Enseignant.hpp"


namespace enseirb{
  
  static Chaine g("Enseignant: ");

  Enseignant::Enseignant():
    Personne(""), _service(""), _nbHeure(0){
  printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}

  Enseignant::Enseignant(const Enseignant &e):
    Personne(e.Personne::nom()), _service(e.service()), _nbHeure(e.nbHeure()){
    printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}

  Enseignant::Enseignant(const Chaine &a, const Chaine &b, int n):
    Personne(a), _service(b), _nbHeure(n) {
    printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}
    

  int Enseignant::nbHeure()const{
    return _nbHeure;
  }

  const Chaine Enseignant::service()const{
    return _service;
  }

  const Chaine Enseignant::nom()const{
    return g + Personne::nom();
  }
}
