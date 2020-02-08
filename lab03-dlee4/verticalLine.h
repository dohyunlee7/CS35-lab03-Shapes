#pragma once

#include "shape.h"

// TODO: Declare your VerticalLine class here.
class VerticalLine : public Shape {
private:
  int x;
  int y;
  int length;
  char symbol;
public:
  VerticalLine(int x, int y, int length, char symbol); //constructor
  void draw(Grid* g);
};
