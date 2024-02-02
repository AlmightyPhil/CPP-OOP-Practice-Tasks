#include <iostream>

#include "3DShape.h"

using namepsace std;

3DShape::3DShape(int a, int h) : Shape(a)
{

}

void 3DShape::print()
{
	cout << " We are in 3D print " << this->h;
}

double 3DShape::getArea()
{
	cout << " We are in 3D shape getArea " << endl;
	return 0.0;
}

void 3DShape::setH(int h)
{
	this->h = h;
}

int 3DShape::getH()
{
	return this->h;
}
