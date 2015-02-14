#include "SmartPointer.hpp"
#include "Chaine.hpp"

#include<cstdio>





void f(int *p){
  printf("%d\n",*p);
}

int main(){
  using enseirb::SmartPointer;
  SmartPointer<int>  p(new int(10));
  SmartPointer<int>  q(p);
 
  f(p);
  *p=5;
  f(q);

  SmartPointer<float> pc(new float(3.2));
  SmartPointer<char>  p1(new char('a'));
    
  
  Chaine s("hello world");
  //  SmartPointer<Chaine> pc(s);
  
  return 0;
}
