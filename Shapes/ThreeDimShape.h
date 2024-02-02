#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;

class ThreeDimShape: public Shape
{
public:
	ThreeDimShape(int, int);
	virtual void print();
	virtual double getArea();
	double getVolume;
	void setH(int);
	int getH();
	
private:
	int h;
};