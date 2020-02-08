#include "verticalLine.h"

// TODO: Define your VerticalLine methods here.
VerticalLine::VerticalLine(int x, int y, int length, char symbol) {
  this->x = x;
  this->y = y;
  this->length = length;
  this->symbol = symbol;
}

void VerticalLine::draw(Grid* g) {
  for (int i = 0; i < length; i++) {
    g->placeSymbol(x, y+i, symbol);
  }
  // *(g).placeSymbol() (dereferencing same thing)
}
