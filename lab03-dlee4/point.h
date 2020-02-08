#pragma once

#include "shape.h"

// TODO: Declare your Point class here.
class Point : public Shape {
private:
  int x;
  int y;
  char symbol;
public:
  Point(int x, int y, char symbol); //constructor
  void draw(Grid* g);
};
