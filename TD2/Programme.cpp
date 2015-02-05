#include <stdio.h>
#include <iostream>
#include "Chaine.hpp"



void annexe(const Chaine &s) {
  std::cout << s.taille() << std::endl;
  //std::printf("%d\n", s.taille());
}

Chaine print(Chaine s){
  s.debug();
  return s;
}

void main1(){
  Chaine chaine("Une petite");
  chaine.debug();
  annexe(chaine);
}

void main2(){
  Chaine s1("Hello");
  Chaine s2(s1);
  Chaine s3 = s1; //les donnees pointes à la mm adresse

  s1.debug();
  s2.debug();
  s3.debug();
}

void main3(){
  Chaine c("Message");
  print(c);
}


int main() {
  Chaine s1("hello");
  Chaine s2("coucou");

  Chaine s3 = s1+s2;
  s3.debug();
  

  s2 = s1;
  s2.debug();

  s1[3] = 'Z';

  for(unsigned int i = 0; i<s1.taille(); ++i)
    printf("%c ",s1[i]);
  printf("\n");

  
  return 0;
}
