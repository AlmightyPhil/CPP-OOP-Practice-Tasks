#pragma once
#include <iostream>
#include <string>
#include "Car.h"

class FamilyCar : public Car
{
public:
	FamilyCar(string, string, string, string, string, string, double, int, int);
	virtual void calculatePrice();
	void setConst1(double);
	void setConst2(double);
	double getConst1();
	double getConst2();


private:
	double const1;
	double const2;
};