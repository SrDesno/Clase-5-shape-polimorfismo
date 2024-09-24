//Edmundo Ruelas Angulo - A01742824
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"

int main(){
  Shape*Shapes [13];
  Shapes [0] = new Circle();
  Shapes [1] = new Rectangle();
  Shapes [2] = new Rectangle (1,2);
  Shapes [3] = new Circle (4,2,1);
  Shapes [4] = new Rectangle();
  Shapes [5] = new Rectangle(5,8);
  Shapes [6] = new Rectangle(2,7);
  Shapes [7] = new Rectangle(3,3);
  Shapes [8] = new Rectangle(9,3);
  Shapes [9] = new Polygon(5,8,2,6);
  Shapes [10] = new Polygon(2,7,8,2);
  Shapes [11] = new Polygon(3,3,1,7);
  Shapes [12] = new Polygon(9,3,8,2);
  
  for (int i = 0; i < 13; i++)
  {
    Shape*current=Shapes [i];std::cout<<current->draw()<<"\n";
  }
  return 0;
}

