#include "Triangle.h"
#include <iostream>
using namespace std;

float Triangle::area() const
{
    return (sideA * sideB * sin(sideC)) / 2;
}
bool Triangle::isSpecial() const
{
    return (sideA == sideB && sideB == sideC);
}

void Triangle::printSpecial() const
{
    cout << " An isosceles triangle with a side length " << sideA << endl;
}
