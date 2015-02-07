#include <iostream>

#include "Chaine.hpp"
#include "Etudiant.hpp"
#include "Enseignant.hpp"
#include "EleveVacataire.hpp"

using enseirb::Chaine;
using enseirb::Personne;
using enseirb::Etudiant;
using enseirb::Enseignant;
using enseirb::EleveVacataire;

Chaine annexe(Chaine u, Chaine t) {
  return u + t;
}

void affiche(const Chaine &s){
  std::cout << "AFFICHE <";
  for(unsigned int i = 0; i < s.taille(); i++)
    std::cout << s[i];
  std::cout << ">" << std::endl;
}

void afficheNom(const Personne &p){
  affiche(p.nom());
}


void test1(){
  Chaine s("un texte long");
  Chaine p("test");
  
  //Chaine r = annexe(s, p);
  Chaine r(annexe(s, p));

  affiche(r);
}


void test2(){
  Chaine a("royce");
  Chaine b("info");
  Chaine c("cpp");

  Etudiant Royce(a, b, c);
  afficheNom(Royce);

  Chaine d("Charlie");
  Chaine e("Prof");

  Enseignant Charlie(d, e, 2);
  affiche(Royce.nom());
  affiche(Charlie.nom());


  EleveVacataire Blah(a, b, c, e, 6);
  affiche(Blah.nom());
  affiche(Blah.nom());
}

int main(){
 

  return 0;
}
