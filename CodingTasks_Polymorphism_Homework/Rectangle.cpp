#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(string c, double w, double h) : Shape(c), width(w), height(h)
{
}

void Rectangle::draw() const
{
	cout << "Drawing a " << this->color << " rectangle.." << endl;
}

double Rectangle::area() const
{
	return this->width * this->height;
}

void Rectangle::printArea(Shape* sPtr) const
{
	double area;
	area = sPtr->area();
	cout << "Area is " << area << endl;
}
