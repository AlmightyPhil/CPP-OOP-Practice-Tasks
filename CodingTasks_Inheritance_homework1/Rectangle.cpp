#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(string c) : Shape(c)
{
}

void Rectangle::draw() const
{
	cout << "Drawing a " << this->color << " rectangle.." << endl;
}
