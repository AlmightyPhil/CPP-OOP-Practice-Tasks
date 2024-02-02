#include <iostream>
//#include "TwoDimShape.h"
#include "Rectangle.h"
//#include "Shape.h"

using namespace std;

Rectangle::Rectangle(int sideA, int size, int pos, string sh, char ch, int sideB) : TwoDimShape(sideA, size, pos, sh, ch)
{
	setB(sideB);
}

void Rectangle::setB(int size)
{
	this->b = size;
}

int Rectangle::getB()
{
	return this->b;
}


void Rectangle::print()
{
	cout << " *A beautiful triangle prints on your screen! " << endl;
	//TwoDimShape::print();
}


double Rectangle::getArea()
{
	//cout << " In Rectagnle getArea() " << endl;
	//return 0.0;
	return Shape::getA() * this->getB();
}