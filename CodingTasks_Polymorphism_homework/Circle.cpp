#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(string c, double r) : Shape(c), radius(r)
{
}

void Circle::draw() const
{
	cout << "Drawing a " << this->color << " circle.." << endl;
}

double Circle::area() const
{
	return 3.14*(this->radius)*(this->radius);
}

void Circle::printArea(Shape* sPtr) const
{
	double area;
	area = sPtr->area();
	cout << "Area is " << area << endl;
}
