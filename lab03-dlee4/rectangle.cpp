#include "rectangle.h"

// TODO: Define your Rectangle methods here.
Rectangle::Rectangle(int x, int y, int width, int height, char symbol) {
  this->x = x;
  this->y = y;
  this->width = width;
  this->height = height;
  this->symbol = symbol;
}

void Rectangle::draw(Grid* g) {
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      g->placeSymbol(x+i, y+j, symbol);
    }
  }
}
