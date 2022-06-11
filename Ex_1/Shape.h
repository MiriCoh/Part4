#pragma once
#include "Point.h"
class Shape
{
public:
	int numOfPoints;
	Point** Points;
	Shape();
	Shape(int);
	Shape(const Shape&);
	Shape(Shape&&);
	virtual ~Shape();
	friend std::ostream& operator<<(std::ostream&, const Shape&);
	virtual float area() const = 0;
	virtual bool isSpecial() const = 0;
	virtual void printSpecial() const = 0;
};

