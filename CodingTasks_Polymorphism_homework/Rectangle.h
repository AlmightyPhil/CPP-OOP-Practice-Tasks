#pragma once

#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:

	Rectangle(string, double, double);
	~Rectangle();
	void draw() const override;
	double area() const override;

private:

	double width;
	double height;

};