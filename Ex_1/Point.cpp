#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
}
Point::Point(float x, float y):x(x),y(y){}

std::istream& operator>>(std::istream& cin, Point& point)
{
	cout << "enter value for x:";
	cin >> point.x ;
	cout << "enter value for y:";
	cin >> point.y;
	return cin;
}

std::ostream& operator<<(std::ostream& cout, const Point& p)
{
	cout << "(" << p.x << ", " << p.y<<") ";
	return cout;
}
