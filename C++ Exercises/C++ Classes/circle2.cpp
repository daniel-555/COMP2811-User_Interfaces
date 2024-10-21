#include <stdexcept>
#include <iostream>
#include "circle2.hpp"

using namespace std;

Circle::Circle(double x, double y, double r):
    Shape(x, y), radius(r)
{
    if (radius <= 0.0) {
        throw invalid_argument("radius must be > 0");
    }
}

bool Circle::containsPoint(double x, double y) const
{
    double dx = x - getX();
    double dy = y - getY();
    return sqrt(dx*dx + dy*dy) <= radius;
}

void Circle::draw() const
{
    cout << "Drawing Circle("
         << "x=" << getX()
         << ",y=" << getY()
         << ",r=" << getRadius()
         << ")" << endl;
}