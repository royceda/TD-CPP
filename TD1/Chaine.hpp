#ifndef __CHAINE_HPP__
#define __CHAINE_HPP__



namespace enseirb{
  class Chaine{
  private:
    unsigned int _taille;
    char * _donnees;

  public:
    Chaine();
    Chaine(const char *);

    char get(unsigned int i)const;
    unsigned int taille();

    ~Chaine();
  };
}
#endif
