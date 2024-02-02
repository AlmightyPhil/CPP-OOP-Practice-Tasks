#include <iostream>
#include <string>
#include "Drink.h"

using namespace std;

Drink::Drink(string n, double p, int q, string t, double v) : Item(n, p, q, t)
{

	this->setVolume(v);
}

void Drink::print()
{
	cout << "Product: " << this->getName() << " Price: " << this->getPrice()
		<< " Quantity: " << this->getQuantity() << " Product type: " << this->getType() << endl;
}

double Drink::calculateSinglePrice()
{
	return getPrice();
}

double Drink::calculatePrice()
{
	return getQuantity() * getPrice();
}

//void Drink::restock(vector<int>)
//{
//	cout << " That should not be shown! Fix code! " << endl;
//}

//void Drink::restock()
//{
//	cout << "Drink Restocked!" << endl;
//}

void Drink::setVolume(double v)
{
	this->volume = v;
}

double Drink::getVolume()
{
	return this->volume;
}
