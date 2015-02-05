#include <cstdio>
#include <iostream>
#include "Chaine.hpp"

Chaine::Chaine():_taille(0) {
  _donnees=NULL;
}

Chaine::Chaine(const char *s) {
  // Cas s==NULL a gerer plus tard.
  _taille = std::strlen(s);

  _donnees = new char[_taille + 1];
  std::strcpy(_donnees, s);
  
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}

Chaine::Chaine(const Chaine &s){
  _taille = s.taille();
  _donnees = new char[taille()+1];
  
  strcpy(_donnees, s._donnees);
}


Chaine::~Chaine() {
  if (_donnees != NULL)
    delete[] _donnees;
  _donnees=NULL;
  std::printf("%s(%d): %s\n", __FILE__, __LINE__, __func__);
}


void Chaine::debug() const{
  std::cout << this->_donnees << std::endl;
}

unsigned int Chaine::taille()const {
    return _taille;
}

char Chaine::get(unsigned int i){
  if (_donnees==NULL) return '\0';
  if (i>_taille) return '\0';
  return _donnees[i];
}


const Chaine& Chaine::operator=(const Chaine &s){
  if(this == &s)
    return s;

  if(_donnees){
    delete[] _donnees;
    _donnees = NULL;
  }
  _taille = s.taille();
  _donnees = new char[taille()+1];
  strcpy(_donnees,s._donnees);
  return *this;
}

/*
char Chaine::operator[](unsigned int index){
  if(_donnees == NULL || index > taille())
    return '\0';
  
  return _donnees[index]; 
}
*/

char& Chaine::operator[](unsigned int index){
  return _donnees[index];
}

const Chaine Chaine::operator+(const Chaine& s){
  Chaine tmp;
  tmp._taille  = this->taille() + s.taille();
  tmp._donnees = new char[tmp.taille()+1];
  
  strcpy(tmp._donnees, this->_donnees);
  strcat(tmp._donnees, s._donnees);
  
  return tmp;
}


char* Chaine::operator char*() const{

  return _donnees;
}
