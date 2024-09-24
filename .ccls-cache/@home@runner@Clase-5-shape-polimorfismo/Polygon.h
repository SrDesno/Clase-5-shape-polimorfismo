#include "Shape.h"

class Polygon:public Shape{
  private:
    int z;
    int w;
  public:
    Polygon();
    Polygon(int, int, int, int);
    std::string draw();
};