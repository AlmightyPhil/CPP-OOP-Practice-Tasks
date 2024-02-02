#include <iostream>
#include <string>
#include "AlcoholicDrink.h"

using namespace std;

// { BEER, WINE, WHISKEY, VODKA, TEQUILA, RUM, GIN, LIQOR }
// AlcoholicDrink::currentAlcStock = { 30, 10, 10, 10, 10, 10, 10, 10};

AlcoholicDrink::AlcoholicDrink(string n, double p, int q, string t, double v, double alT, double alV) : Drink(n, p, q, t, v)
{
	this->setAlcTax(alT);
	this->setAlcVolume(alV);
}

void AlcoholicDrink::print()
{
	cout << "An alcoholic drink: " << this->getName() << " of type: " << this->getType()
			<< " with volume of: " << this->getVolume() << " leters" << " with alcohol volume of: " 
				<< this->getAlcVolume() << " percent" << " with price: " << this->getPrice() 
					<< " and quantity: " << this->getQuantity() << endl;
}

double AlcoholicDrink::calculateSinglePrice()
{
	double volumeModifier = 1;
	if (this->getVolume() > 1) { volumeModifier = this->getVolume(); }
	return (1+(0.005 * this->getAlcVolume())) * volumeModifier * (this->getPrice() * this->getAlcTax());// Volume * AlcVolume * (Price * Tax);
}

double AlcoholicDrink::calculatePrice()
{
	return this->calculateSinglePrice() * this->getQuantity();// Quantity * Volume * AlcVolume * (Price * Tax);
}

void AlcoholicDrink::restock(vector<int>)
{
	cout << "Alcoholic drinks restocked! " << endl;
}

void AlcoholicDrink::setAlcTax(double alt)
{
	this->alcTax = alt;
}

void AlcoholicDrink::setAlcVolume(double alv)
{
	this->alcVolume = alv;
}

double AlcoholicDrink::getAlcTax()
{
	return this->alcTax;
}

double AlcoholicDrink::getAlcVolume()
{
	return this->alcVolume;
}
