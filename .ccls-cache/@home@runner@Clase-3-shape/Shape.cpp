#include "Shape.h"

Shape::Shape(){
  x=0;
  y=0;
}

Shape::Shape(int _x, int _y){
  x = _x;
  y = _y;
}

std::string Shape::draw(){
  return "Soy una figura";
}

int Shape::getx(){
  return x;
}

int Shape::gety(){
  return y;
}