#include <cstdio>
#include <iostream>
#include <cassert>

#include "Chaine.hpp"
#include "CurseurClassique.hpp"
#include "CurseurInverse.hpp"
#include "CurseurPas.hpp"


using enseirb::CurseurClassique;
using enseirb::CurseurInverse;
using enseirb::CurseurPas;


void affiche(const Chaine &s){
  std::puts("affiche:");
  for(unsigned int i = 0; i < s.taille(); i++)
    std::putchar(s[i]);
  std::puts("");
}


void main1(){
  Chaine s("un texte long");
  Chaine p("test");
  Chaine copie=p;


  affiche(s);
  affiche(p);
  affiche(copie);

  p=s;
  
  affiche(s);
  affiche(p);
  affiche(copie);
}


int main(int argc, char **argv){

  Chaine s("Hello World");

  CurseurClassique CC(s);
  assert( *CC == 'H');
  ++CC; ++CC; 
  assert( *CC == 'l');
  --CC;
  assert( *CC == 'e');
  CC.fin(); --CC;
  assert( *CC == 'd');
  CC.debut();
  assert( *CC == 'H');
  std::cout<< "Curseur Classique:\t OK" << std::endl;

  CurseurInverse CI(s);
  assert( *CI == '\0');
  ++CI; ++CI;  
  assert( *CI == 'l');
  --CI;
  assert( *CI == 'd');
  CI.fin(); --CI;
  assert( *CI == 'e');
  CI.debut();
  assert( *CI == '\0');
  std::cout<< "Curseur Inverse:\t OK" << std::endl;


  CurseurPas CP(s, 1, 8, 2);
  assert( *CP == 'e');
  ++CP; ++CP;  
  assert( *CP == 'W');
  --CP;
  assert( *CP == 'o');
  CP.fin(); --CP;
  assert( *CP == 'W');
  CP.debut();
  assert( *CP == 'e');
  std::cout<< "Curseur Pas:\t OK" << std::endl;


  return 0;
}
