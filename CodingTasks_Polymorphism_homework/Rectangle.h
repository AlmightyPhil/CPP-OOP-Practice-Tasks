#pragma once

#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:

	Rectangle(string);
	void draw() const override;

};