#include <iostream>
using namespace std;
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	Shape** arr{};
	cout << "how many shapes you would like to define? ";
	int length, sides;
	cin >> length;
	arr = new Shape*[length];
	Point* p = new Point();
	for (size_t i = 0; i < length; i++)
	{
		cout << "please choose : for Circle press 1, Triangle press 3, Rectangle press 4" << endl;
		cin >> sides;
			try
		{
			switch (sides)
			{
			case 1: {
				float radius;

				cout << "Enter radius: ";
				cin >> radius;
				if (radius <= 0)
					throw "invalid value";
				else
					arr[i] = new Circle(radius);
				break;
			}
			case 3:
				arr[i] = new Triangle();
				break;
			case 4:
				arr[i] = new Rectangle();
				break;
			default:
				throw "invalid value";
				break;
			}
		}
		catch (const char* msg)
		{
			cout << msg << endl << endl;
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << *arr[i] << " The area is: " << arr[i]->area();
		if (arr[i]->isSpecial())
			arr[i]->printSpecial();
		cout << endl;
	}
	return 0;
}

