#pragma once
#include <string>

using namespace std;

class Shape
{
protected:

	string color;

public:

	Shape(string c) : color(c) {}
	virtual ~Shape() {}
	virtual void draw() const = 0;
	virtual double area() const = 0;

};
