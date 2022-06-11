#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape()
{
}

Shape::Shape(int numOfPoints)
{
	numOfPoints = numOfPoints;
	Points = new Point*[numOfPoints];
	cout << "enter values of " << numOfPoints << " points" << endl;
	for (size_t i = 0; i < numOfPoints; i++)
	{
		cout << "Enter value of " <<" point number : "<< i + 1 <<endl;
		Points[i] = new Point();
		cin >> *Points[i];
	}
}

Shape::Shape(const Shape& shape)//copy ctor
{
	numOfPoints = shape.numOfPoints;
	if (Points)
		delete[] Points;
	Points = new Point*[numOfPoints];
	for (size_t i = 0; i < numOfPoints; i++)
	{
		Points[i] = new Point(shape.Points[i]->x,shape.Points[i]->y);
	}
}

Shape::Shape(Shape&& shape)//move ctor
{
	numOfPoints = shape.numOfPoints;
	if (Points)
		delete[] Points;
	Points = shape.Points;
	for (size_t i = 0; i < numOfPoints; i++)
	{
		shape.Points[i] = nullptr;
	}
}
Shape::~Shape()
{
	if (Points)
		delete[] Points;
}


std::ostream& operator<<(std::ostream& cout, const Shape& shape)
{
	cout << "Points: ";
	for (size_t i = 0; i < shape.numOfPoints; i++)
	{
		cout << *(shape.Points[i]);
	}
	return cout;
}

