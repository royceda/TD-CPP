#include <iostream>
#include "Chaine.hpp"
#include "Etudiant.hpp"

using enseirb::Chaine;
using enseirb::Personne;
using enseirb::Etudiant;


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



void main1(){
  Chaine s("un texte long");
  Chaine p("test");
  
  //Chaine r = annexe(s, p);
  Chaine r(annexe(s, p));

  affiche(r);
}


int main(){
  Chaine a("royce");
  Chaine b("info");
  Chaine c("cpp");


  Etudiant Royce(a, b, c);
   
  afficheNom(Royce);
  
}
