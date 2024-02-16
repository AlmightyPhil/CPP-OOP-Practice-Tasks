#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(string c, double r) : Shape(c), radius(r)
{
}

Circle::~Circle()
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


