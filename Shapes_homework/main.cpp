#include <iostream>
#include <vector>
#include "Shape.h"
#include "TwoDimShape.h"
#include "ThreeDimShape.h"
#include "Square.h"
#include "Rectangle.h"


using namespace std;

int main()
{
	double value = 0.0;
	Shape* sPtr1 = new TwoDimShape(30, 20, 20, "adwd", 'c');
	//Shape* sPtr2 = new ThreeDimShape(15, 20);
	TwoDimShape* sPtr3square = new Square(10);
	TwoDimShape* sPtr4Rectangle = new Rectangle(20, 10, 25, "fig r", 'r', 25);

	vector<Shape*> myShapes;
	myShapes.push_back(sPtr1);
	//myShapes.push_back((sPtr2);
	myShapes.push_back(sPtr3square);
	myShapes.push_back(sPtr4Rectangle);
	
	for (int i = 0; i < myShapes.size(); i++)
	{
		myShapes.at(i)->print();
		value = myShapes.at(i)->getArea();
		cout << value << endl;
	}

	return 0;
}