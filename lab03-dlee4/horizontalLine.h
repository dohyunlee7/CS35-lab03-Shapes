#pragma once

#include "shape.h"

// TODO: Declare your HorizontalLine class here.
class HorizontalLine : public Shape {
private:
  int x;
  int y;
  int length;
  char symbol;
public:
  HorizontalLine(int x, int y, int length, char symbol);
  void draw(Grid* g);
};
