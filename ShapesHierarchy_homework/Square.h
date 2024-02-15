#include <iostream>
#include "TwoDimShape.h"

using namespace std;

class Square: public TwoDimShape
{
public:
	Square(int);
	double getArea();
private:
};