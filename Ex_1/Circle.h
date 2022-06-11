#pragma once
#include "Point.h"
#include "Shape.h"

class Circle:public Shape
{
public:
	Point* center;
	float radius;
	Circle(float radius):Shape(1)
	{
		this->radius = radius;
	}

	// Inherited via Shape
	virtual float area() const override;
	virtual bool isSpecial() const override;
	virtual void printSpecial() const override;
};

