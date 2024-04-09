#include "Polygon.hpp"

Polygon::Polygon()
{
    sides = 0;
}

Polygon::Polygon(int valueX, int valueY, int valSides) : Shape(valueX, valueY)
{
    sides = valSides;
}

int Polygon::getSides()
{
    return sides;
}