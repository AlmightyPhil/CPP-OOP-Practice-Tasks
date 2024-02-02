#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;

class 3DShape: public Shape
{
public:
	3DShape(int);
	virtual void print();
	virtual double getArea();
	double getVolume;
	void setH(int);
	int getH();
	
private:
	int h;
};