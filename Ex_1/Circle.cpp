#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;

float Circle::area() const
{
    return pow(radius, 2) * 3.1415926535897932384626433832795;
}

bool Circle::isSpecial() const
{
    return (Points[0]->x == 0 && Points[0]->y == 0);
}

void Circle::printSpecial() const
{
    cout << " A canonical circle with a radius: " << radius;
}
