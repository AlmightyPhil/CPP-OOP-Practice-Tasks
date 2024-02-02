#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(double price)
{
}

void OvernightPackage::setOnPrice(double price)
{
	this->onPrice = price;
}

double OvernightPackage::getOnPrice()
{
	return this->onPrice;
}
