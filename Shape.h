//Edmundo Ruelas Angulo - A01742824
#include <iostream>
#pragma once

class Shape{
  private:
    int x;
    int y;

  public:
    Shape();
    Shape(int, int);
    virtual std::string draw();
    int getx();
    int gety();
    void setx(int);
    void sety(int);
};