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
  return "Soy una figura con valor en x de: "+std::to_string(x)+"e y de: "+std::to_string(y)+"\n";
}

int Shape::getx(){
  return x;
}

int Shape::gety(){
  return y;
}

void Shape::setx(int _x){
  x=_x;
}

void Shape::sety(int _y){
  y=_y;
}
