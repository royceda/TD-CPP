#include "SmartPointer.hpp"
#include "Chaine.hpp"

#include<cstdio>
#include<cstring>

using enseirb::Chaine;
using enseirb::SmartPointer;





void f(const char *p){
  std::printf("%s\n",p);
}




void testChaine(){

  Chaine c("Hello World");
  
}

void test(){
 SmartPointer p(new char[10]);
SmartPointer aa("azaza");

  std::strcpy(p, "coucou");

  std::printf("conversion %s\n", (const char *) p);
  std::printf("conversion %c\n", ((const char*) p)[1]);
  std::printf("get %s\n", p.get());
  std::printf("operateur* %c\n", *p);
  
  std::strcpy(p.get(), "BYE");

  SmartPointer q(p);
  f(q);

  std::printf("(operator->())[2] %c\n", (q.operator->())[2]);
  std::printf("operator->() %s\n", q.operator->());

  SmartPointer r(new char[7]);
  std::strcpy(r.get(), "encore");
  q = r;

  //q = "moi"; // probleme

  //const SmartPointer s(r);
  //f(s);


}


int main(){

 
test();
testChaine();

}
