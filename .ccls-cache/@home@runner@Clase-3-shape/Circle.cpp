#include "Circle.h"

Circle::Circle(){
  r=0;
}

Circle::Circle(int _x, int _y, int _r):Shape(_x, _y){
  r=_r;
}