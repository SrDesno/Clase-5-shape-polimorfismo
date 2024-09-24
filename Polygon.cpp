#include "Polygon.h"

Polygon::Polygon(){
  z=0;
  w=0;
}

Polygon::Polygon(int _x, int _y, int _z, int _w):Shape(_x, _y){
  z=_z;
  w=_w;
}

std::string Polygon::draw(){
  return "Soy un poligono con valor en x de: " + std::to_string(Shape::getx())+ " y de: "+std::to_string(Shape::gety())+" w de: "+std::to_string(w)+ " y z de: "+std::to_string(z)+"\n";
}