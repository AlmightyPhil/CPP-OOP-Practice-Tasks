#include <iostream>
#include "2DShape.h"

using namespace std;

2DShape::2DShape(int a) : Shape(a)
{

}

void 2DShape::print()
{
	cout << " In 2D " << endl;
}

double 2DShape::getArea()
{
	cout << " In 2D getArea " << endl;
	return 0.0;
}
