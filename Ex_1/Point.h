#pragma once
#include <ostream>
class Point
{
public:
	float x;
	float y;
	Point();
	Point(float, float);
	friend std::istream& operator>>(std::istream&, Point&);
	friend std::ostream& operator<<(std::ostream&, const Point&);
};

