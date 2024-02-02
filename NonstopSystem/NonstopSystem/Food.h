#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class Food : public Item
{
public:
	Food(string, double, int, string, double);
	void print();
	double calculateSinglePrice();
	double calculatePrice();
	void restock(vector<int>);
	void setWeight(double);
	void setCityTax(double);
	double getWeight();
	double getCityTax();

private:
	double weight;
	double cityTax;
};
