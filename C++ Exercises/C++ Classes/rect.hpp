#pragma once

#include "shape.hpp"
class Rectangle: public Shape
{

    public:
        Rectangle(double, double, double, double);
        Rectangle(double w, double h): Rectangle(0, 0, w, h) {}
        double getWidth() const { return width; }
        double getHeight() const { return height; }
        double perimeter() const { return 2*width + 2*height; }
        double area() const { return width*height; }
        virtual void draw() const;

    private:
        double width, height;
};