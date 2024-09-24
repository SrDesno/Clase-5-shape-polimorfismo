#include <iostream>

class Shape{
  private:
    int x;
    int y;

  public:
    Shape();
    Shape(int, int);
    std::string draw();
    int getx();
    int gety();
};