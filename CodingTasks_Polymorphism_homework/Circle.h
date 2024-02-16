#pragma once

#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:

	Circle(string, double);
	~Circle();
	void draw() const override;
	double area() const override;

private:

	double radius;

};