#include "point.h"
#include "grid.h"

// TODO: Define your Point methods here.
Point::Point(int x, int y, char symbol) {
  this->x = x;
  this->y = y;
  this->symbol = symbol;
}

void Point::draw(Grid* g) {
  g->placeSymbol(x, y, symbol);
  // *(g).placeSymbol() (dereferencing same thing)
}
