#pragma once
#include "Point.h"
#include "Shape.h"
#include <cmath>

class Triangle:public Shape
{
	double sideA, sideB, sideC;
		float corner;
public:
	Triangle():Shape(3)
	{
		sideA = sqrt(pow(Points[0]->x - Points[1]->x, 2) + pow(Points[0]->y - Points[1]->y, 2));
		sideB = sqrt(pow(Points[1]->x - Points[2]->x, 2) + pow(Points[1]->y - Points[2]->y, 2));
		sideC = sqrt(pow(Points[2]->x - Points[0]->x, 2) + pow(Points[2]->y - Points[0]->y, 2));
		corner = (pow(sideA, 2) + pow(sideB, 2) - pow(sideC, 2)) / (2 * sideA * sideB );
		corner = cos(corner);
	}

	// Inherited via Shape
	virtual float area() const override;
	virtual bool isSpecial() const override;
	virtual void printSpecial() const override;
};

