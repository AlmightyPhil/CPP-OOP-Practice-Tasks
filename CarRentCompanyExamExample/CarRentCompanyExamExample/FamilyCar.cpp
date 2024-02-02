#include <iostream>
#include "FamilyCar.h"

using namespace std;

FamilyCar::FamilyCar(string b, string m, string t, string c, string vin, string id, double fc, int tax, int td)
	: Car(b, m, t, c, vin, id, fc, tax, td)
{

}

void FamilyCar::calculatePrice()
{
	cout << "Total price is: " << this->getTaxPerDay() * this->getConst1() << endl; // have to be done with if for the km traveled
}

void FamilyCar::setConst1(double c1)
{
	this->const1 = c1;
}

void FamilyCar::setConst2(double c2)
{
	this->const2 = c2;
}

double FamilyCar::getConst1()
{
	return const1;
}

double FamilyCar::getConst2()
{
	return const2;
}
