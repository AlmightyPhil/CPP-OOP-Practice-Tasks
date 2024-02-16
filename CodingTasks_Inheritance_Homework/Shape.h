#pragma once
#include <string>

using namespace std;

class Shape
{
protected:
	string color;

public:
	Shape(string c) : color(c) {}
	virtual void draw() const = 0;

};
