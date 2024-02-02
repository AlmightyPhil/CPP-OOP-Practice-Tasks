#include <iostream>
#include <vector>
#include "Shape.h"
#include "2DShape.h"
#include "3DShape.h"


using namespace std;

int main()
{
	Shape* sPtr1 = new 2DShape(30);
	Shape* sPtr2 = new 3DShape(15, 20);

	vector<Shape*> myShapes;
	myShapes.push_back(sPtr1);
	myShapes.push_back(sPtr2);

	for (int i = 0; i < myShapes.size(); i++)
	{
		myShapes.at(i)->print();
		myShapes.at(i)->getArea();
	}

	return 0;
}