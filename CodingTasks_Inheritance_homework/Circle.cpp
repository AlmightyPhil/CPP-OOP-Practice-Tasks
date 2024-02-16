#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(string c) : Shape(c)
{
}

void Circle::draw() const
{
	cout << "Drawing a " << this->color << " circle.." << endl;
}
