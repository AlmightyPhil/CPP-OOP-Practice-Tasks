
#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"
#include "TwoDimShape.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	//Rectangle* recPtr = new Rectangle(20, 10, "string1", 10.2);
	//Rectangle* recPtr2 = new Rectangle(10, 7, "string2", 7.2);

	//vector<Rectangle*> rectangleVector;
	//rectangleVector.push_back(recPtr);
	//rectangleVector.push_back(recPtr2);

	//rectangleVector.at(1)->getArea();

	bool temp = true;

	Rectangle r1(20, 10, "string1", 10.2, "Rectangle");
	Rectangle r2(10, 15, "string2", 7.2, "Rectangle");

	temp = (r1 == r2);
	//cout << temp << endl;
	
	if (temp)
	{
		cout << " Rectangle 1" << " has the same area as " << " Rectangle 2 " << endl;
	}
	else
	{
		cout << " The areas of the rectangles are different!" << endl;
	}

    return 0;
}