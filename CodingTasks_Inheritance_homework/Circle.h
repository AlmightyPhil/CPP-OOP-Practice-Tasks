#pragma once

#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:

	Circle(string);
	void draw() const override;

};