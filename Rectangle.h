#include "Shape.h"

class Rectangle:public Shape{
  public:
    Rectangle();
    Rectangle(int,int);
    std::string draw();
};