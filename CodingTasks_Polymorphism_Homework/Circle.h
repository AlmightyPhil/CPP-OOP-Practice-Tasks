#pragma once

#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:

	Circle(string, double);
	void draw() const override;
	double area() const override;
	void printArea(Shape*) const override;

private:

	double radius;

};