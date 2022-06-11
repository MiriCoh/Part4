#include "Rectangle.h"
#include <iostream>
using namespace std;

float Rectangle::area() const
{
    return sideA * sideB;
}

bool Rectangle::isSpecial() const
{
    return (sideA == sideB && sideC == sideB && sideC == sideD);
}

void Rectangle::printSpecial() const
{
    cout << " Square with side length " << sideA << endl;
}
