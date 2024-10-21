#pragma once

class Shape
{
    public:
        Shape(double x, double y): xPos(x), yPos(y) {}
        double getX() const {return xPos; }
        double getY() const {return yPos; }
        virtual void draw() const = 0;

    private:
        double xPos, yPos;
};