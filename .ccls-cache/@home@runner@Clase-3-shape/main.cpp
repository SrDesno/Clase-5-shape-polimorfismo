#include "Circle.h"

int main(){
  Shape figura1(1,2);
  std::cout<<figura1.draw()<<" con valor en x en: "<<figura1.getx()<<" y valor y en: "<<figura1.gety()<<std::endl;
  Circle circulo1(2,3,5);

  std::cout<<circulo1.draw()<<"con valor x en: "<<circulo1.getx()
}