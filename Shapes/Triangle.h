#include <iostream>
#include "TwoDimShape.h"

using namespace std;

class Triangle : public TwoDimShape
{
public:
	//Triangle(int, int, int);
	//void setSize(int);
	//void setPosition(int);
	//void setSh(string);
	//void setCh(char);
	//void setB(int);
	//int getSize();
	//int getPosition();
	//string getSh();
	//char getCh();
	//int getB();
	virtual void print();
	virtual double getArea();

private:
	int c;
};