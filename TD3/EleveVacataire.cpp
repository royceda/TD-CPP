#include "EleveVacataire.hpp"


namespace enseirb{
  
  EleveVacataire::EleveVacataire():
    Personne(""), Etudiant(), Enseignant(){
    printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}

   EleveVacataire::EleveVacataire(const Chaine &nom, const Chaine &ens, const Chaine &fil, const Chaine &service,  int n):
     Personne(nom), Etudiant(nom, fil, ens), Enseignant(nom, service, n){
     printf("%s (%d): %s\n", __FILE__,__LINE__,__func__);}

  const Chaine EleveVacataire::nom()const{
    return Etudiant::nom() + Enseignant::nom();
    }
}
