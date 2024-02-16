#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(string c, double w, double h) : Shape(c), width(w), height(h)
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::draw() const
{
	cout << "Drawing a " << this->color << " rectangle.." << endl;
}

double Rectangle::area() const
{
	return this->height * this->width;
}


