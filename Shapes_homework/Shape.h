#pragma once

#include <iostream>

using namespace std;

class Shape
{
public:
	Shape(int);
	int getA();
	void setA(int);
	virtual void print();
	virtual double getArea();
private:
	int a;

};