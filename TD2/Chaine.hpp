#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <cstring>

class Chaine {
 private:
  char*        _donnees;
  unsigned int _taille;

 public:
  Chaine();
  Chaine(const char*);
  Chaine(const Chaine&);
  ~Chaine();

  void debug() const;
  unsigned int taille()const;
  char get(unsigned int i);


  const Chaine& operator=(const Chaine&);
  //char operator[](unsigned int index);
  char& operator[](unsigned int index);
  const Chaine operator+(const Chaine&);
  char* operator char*() const;
};

#endif
