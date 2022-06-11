#pragma once
#include "Shape.h"
 
class Rectangle:public Shape
{
	float sideA, sideB, sideC, sideD;
public :
	Rectangle():Shape(4)
	{
		sideA = sqrt(pow(Points[0]->x - Points[1]->x, 2) + pow(Points[0]->y - Points[1]->y, 2));
		sideB = sqrt(pow(Points[1]->x - Points[2]->x, 2) + pow(Points[1]->y - Points[2]->y, 2));
		sideC = sqrt(pow(Points[2]->x - Points[3]->x, 2) + pow(Points[2]->y - Points[3]->y, 2));
		sideD = sqrt(pow(Points[3]->x - Points[0]->x, 2) + pow(Points[3]->y - Points[0]->y, 2));
	}

	// Inherited via Shape
	virtual float area() const override;
	virtual bool isSpecial() const override;
	virtual void printSpecial() const override;
};

