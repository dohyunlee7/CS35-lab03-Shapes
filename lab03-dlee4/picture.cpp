#include <iostream>
#include <stdexcept>

#include "picture.h"

using namespace std;

Picture::Picture() {
    // TODO: implement Picture::Picture
    this->numberOfShapes = 0;
    this->shapes = new Shape*[50];
}

Picture::~Picture() {
    // TODO: implement Picture::~Picture
    for (int i = 0; i < this->numberOfShapes; i++) {
      delete shapes[i];
    }
    delete[] shapes;
}

string Picture::toString() {
    // TODO: implement Picture::toString
    Grid* g = new Grid();
    for (int i = 0; i < this->numberOfShapes; i++) {
      shapes[i]->draw(g);
    } //draw shapes onto grid
    string stringGrid = g->toString();
    delete g;
    return stringGrid;

}

void Picture::print() {
    cout << this->toString() << endl;
}

void Picture::addShape(Shape* shape) {
    // TODO: implement Picture::addShape
    shapes[this->numberOfShapes] = shape;
    this->numberOfShapes += 1;
}
