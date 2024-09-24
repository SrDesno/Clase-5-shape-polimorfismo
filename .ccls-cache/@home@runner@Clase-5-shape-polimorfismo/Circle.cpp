//Edmundo Ruelas Angulo - A01742824
#include "Circle.h"

Circle::Circle(){
  r=0;
}

Circle::Circle(int _x, int _y,int _r):Shape(_x, _y){
  r=_r;
}

std::string Circle::draw(){
  return "Soy un circulo con valor en x de: " + std::to_string(Shape::getx()) + " y de: "+std::to_string(Shape::gety())+" y radio de: "+std::to_string(r)+"\n";
}