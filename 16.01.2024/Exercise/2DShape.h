#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;

class 2DShape : public Shape
{
public:
	2DShape(int);
	virtual void print();
	virtual double getArea();

private:
	//int b;
};