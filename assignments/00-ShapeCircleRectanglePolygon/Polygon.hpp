#pragma once

#include "Shape.hpp"

class Polygon : public Shape
{
public:
    Polygon();
    Polygon(int valueX, int valueY, int valSides);
    int getSides();
private:
    int sides;
};