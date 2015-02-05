#include "Chaine.hpp"
#include <cstdio>

using namespace std;

using namespace enseirb;

void annexe(Chaine s){}

  int main(){

    Chaine C1; //Allocation statique
    Chaine *C2; //juste un pointeur
    Chaine *C3 = new Chaine(); //alloc dyn
    Chaine C4("Hello World");

    annexe(C1);

    std::printf("C1: %d\n", C1.taille());
    std::printf("C2: %d\n", C2->taille());
    std::printf("C3: %d\n", C3->taille());
    std::printf("C4: %d\n", C4.taille());

    std::printf("C4[3]: %c\n", C4.get(3));
    
    delete C3;

    return 0;
}
