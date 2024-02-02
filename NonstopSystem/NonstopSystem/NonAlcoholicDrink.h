#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Drink.h"

using namespace std;

// { WATER, JUICE, ICETEA }

class NonAlcoholicDrink : public Drink
{
public:
	NonAlcoholicDrink(string, double, int, string, double, double);
	void print();
	double calculateSinglePrice();
	double calculatePrice();
	void restock(vector<int>);
	void setCityTax(double);
	double getCityTax();
private:
	double cityTax;
	vector<int> currentNonAlcStock{ 50, 30, 40 };
};