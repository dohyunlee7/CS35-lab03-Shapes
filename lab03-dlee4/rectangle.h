#pragma once

#include "shape.h"

// TODO: Declare your Rectangle class here.
class Rectangle : public Shape {
private:
  int x;
  int y;
  int width;
  int height;
  char symbol;
public:
  Rectangle(int x, int y, int width, int height, char symbol);
  void draw(Grid* g);
};
