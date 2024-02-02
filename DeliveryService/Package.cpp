#include <iostream>
#include "Package.h"

using namespace std;

Package::Package(double basePrice, double weight, Address sa, Address ra) : senderAddress(sa), recipientAddress(ra)
{
	setBasePrice(basePrice);
	setWeight(weight);

}

double Package::calculateCost()
{
	cout << " Cost is: " << getBasePrice() * getWeight() << endl;
	return getBasePrice() * getWeight();
}

void Package::print()
{
	cout << " Package Print ";
	this->senderAddress.print();
	this->recipientAddress.print();
}

void Package::setWeight(double w)
{
	this->weight = w;
}

void Package::setBasePrice(double p)
{
	this->basePrice = p;
}

double Package::getWeight()
{
	return this->weight;
}

double Package::getBasePrice()
{
	return this->basePrice;
}
