#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int side)
{
	this->a = side;
}

int Shape::getA()
{
	return this->a;
}

void Shape::setA(int side)
{
	this->a = side;
}

void Shape::Print()
{
	cout << " In Shape the side is: " << this->a << endl;
}

double Shape::getArea()
{
	cout << " In Shape the area is: " << endl;
	return 0.0;
}
