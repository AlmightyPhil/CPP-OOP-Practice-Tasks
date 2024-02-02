#include <iostream>
#include <string>
#include "TwoDimShape.h"

using namespace std;

class Rectangle : public TwoDimShape
{
public:
	Rectangle(int, int, int, string, char, int);
	
	virtual void print();
	virtual double getArea();
	void setB(int);
	int getB();
private:

	int b;
};