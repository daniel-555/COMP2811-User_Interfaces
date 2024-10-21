#include <stdexcept>
#include <iostream>
#include "rect.hpp"

using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h):
    Shape(x, y), width(w), height(h) 
{
    if (width <= 0.0 || height <= 0.0) {
        throw invalid_argument("Width and height must be > 0");
    }
    if (x > 100) {
        throw invalid_argument("x is too large");
    }
    if (y > 100) {
        throw invalid_argument("y is too large");
    }
}

void Rectangle::draw() const
{
    cout << "Drawing Rectangle("
         << "x=" << getX()
         << ",y=" << getY()
         << ",w=" << getWidth()
         << ",h=" << getHeight()
         << ")" << endl;
}