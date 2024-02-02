#include <iostream>
#include <string>
#include "Drink.h"
#include "NonAlcoholicDrink.h"

using namespace std;

// { WATER, JUICE, ICETEA }

NonAlcoholicDrink::NonAlcoholicDrink(string n, double p, int q, string t, double v, double tax) : Drink(n, p, q, t, v)
{
	this->setCityTax(tax);
}

void NonAlcoholicDrink::print()
{
	cout << "A non-alcoholic drink: " << this->getName() << " of type: " << this->getType()
			<< " with volume of: " << this->getVolume() << " leters" 
				<< " with price: " << this->getPrice()
					<< " and quantity available: " << this->getQuantity() << endl;
}

double NonAlcoholicDrink::calculateSinglePrice()
{
	return /*this->getVolume() **/ this->getPrice() + this->getCityTax(); // Volume * Price + CityTax
}

double NonAlcoholicDrink::calculatePrice()
{
	return this->getQuantity() * this->calculateSinglePrice(); // Quantity * Volume * Price + CityTax
}

void NonAlcoholicDrink::restock(vector<int>)
{
	cout << "NonAlcoholicDrinks restocked! " << endl;
}

void NonAlcoholicDrink::setCityTax(double ct)
{
	this->cityTax = ct;
}

double NonAlcoholicDrink::getCityTax()
{
	return this->cityTax;
}
