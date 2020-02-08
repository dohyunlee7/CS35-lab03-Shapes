#include "horizontalLine.h"

// TODO: Define your HorizontalLine methods here.
HorizontalLine::HorizontalLine(int x, int y, int length, char symbol) {
  this->x = x;
  this->y = y;
  this->length = length;
  this->symbol = symbol;
}

void HorizontalLine::draw(Grid* g) {
  for (int i = 0; i < length; i++) {
    g->placeSymbol(x+i, y, symbol);
  }
  // *(g).placeSymbol() (dereferencing same thing)
}
