#include "Rectangle.h"

Rectangle::Rectangle(){
  Shape::setx(0);
  Shape::sety(0);
}

Rectangle::Rectangle(int _x, int _y):Shape(_x, _y){
  Shape::setx(_x);
  Shape::sety(_y);
}

std::string Rectangle::draw(){
  return "Soy un Rectangulo con altura de: "+std::to_string(Shape::gety())+" y base de: "+std::to_string(Shape::getx())+"\n";
}