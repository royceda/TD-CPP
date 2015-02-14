#ifndef __POINT_CPP__
#define __POINT_CPP__

#include <exception> 
#include <iostream>
namespace enseirb{

class Point{
private:
int x, y;

public:
Point(int a, int b): x(a), y(b){}

  int operator[](int i){
try{
if( i == 0)
  return x;
 else if( i == 1)
   return y;
 else
   throw "Error";
}catch(char *c){
std::cout<< c << std::endl;
}
}

	    };
}
#endif
