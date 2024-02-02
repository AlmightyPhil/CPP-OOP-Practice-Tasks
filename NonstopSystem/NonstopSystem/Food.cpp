#include <iostream>
#include <string>
#include "Food.h"

using namespace std;

Food::Food(string n, double p, int q, string t, double w) : Item(n ,p, q, t)
{
	this->setWeight(w);
}

void Food::print()
{
	cout << "Food Product: "  << this->getName() << " of type: " << this->getType() 
			<< " with weight of: " << this->getWeight() << " kg" 
				<< " with price: " << this->getPrice() << " and quantity available: " 
					<< this->getQuantity() << endl;
}

double Food::calculateSinglePrice()
{
	return this->getPrice() * this->getCityTax();
}

double Food::calculatePrice()
{
	return this->getWeight() * this->getQuantity() * this->calculateSinglePrice();
}

void Food::restock(vector<int>)
{
	cout << "All food restocked! " << endl;
}

void Food::setWeight(double w)
{
	this->weight = w;
}

void Food::setCityTax(double ct)
{
	this->cityTax = ct;
}

double Food::getWeight()
{
	return this->weight;
}

double Food::getCityTax()
{
	return this->cityTax;
}
