#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

// enum Type { WINE , GIN , WHISKEY , WATER , JUICE , ICETEA };

class Drink : public Item
{
public:
	Drink(string, double, int, string, double);
	void print();
	double calculateSinglePrice();
	double calculatePrice();
	virtual void restock(vector<int>)=0;
	void setVolume(double);
	double getVolume();
private:

	double volume;
	// NAME, PRICE, QUANTITY, TYPE(WINE, GIN, WHISKEY, WATER JUICE, ICE TEA, ...)

};