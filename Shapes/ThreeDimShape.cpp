#include <iostream>

#include "ThreeDimShape.h"

using namespace std;

ThreeDimShape::ThreeDimShape(int a, int h) : Shape(a)
{

}

void ThreeDimShape::print()
{
	cout << " We are in 3D print " << this->h;
}

double ThreeDimShape::getArea()
{
	cout << " We are in 3D shape getArea " << endl;
	return 0.0;
}

void ThreeDimShape::setH(int h)
{
	this->h = h;
}

int ThreeDimShape::getH()
{
	return this->h;
}
