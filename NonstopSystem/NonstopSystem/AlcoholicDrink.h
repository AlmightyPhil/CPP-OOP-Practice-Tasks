#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Drink.h"

using namespace std;

// enum Type { BEER, WINE, WHISKEY, VODKA, TEQUILA, RUM, GIN, LIQOR };

class AlcoholicDrink : public Drink
{
public:
	AlcoholicDrink(string, double, int, string, double, double, double);
	void print();
	double calculateSinglePrice();
	double calculatePrice();
	void restock(vector<int>);
	void setAlcTax(double);
	void setAlcVolume(double);
	double getAlcTax();
	double getAlcVolume();

private:
	double alcTax;
	double alcVolume;
	vector<int> currentAlcStock{ 30, 10, 10, 10, 10, 10, 10, 10 };
	
};