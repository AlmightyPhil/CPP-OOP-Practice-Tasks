#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(int side) : TwoDimShape(side)
{
	this->setA(side);
}

double Square::getArea()
{
	//cout << " We are in getAreaSquare ";
	return this->getA() * this->getA();
}


