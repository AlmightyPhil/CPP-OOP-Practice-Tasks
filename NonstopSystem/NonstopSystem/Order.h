#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "AlcoholicDrink.h"
#include "NonAlcoholicDrink.h"
#include "Food.h"

using namespace std;

class Order
{
public:
	Order(vector<Drink*>, time_t);// , double);
	//void setDate(time_t);
	void addDrink(Drink*);
	void print();
	void showDate() const;
	void calculateTotalPrice();
	void setDate(time_t);
	double getTotalPrice() const;
	time_t getDate();

private:
	static int numberOfOrders; // if we want unique number for every number and we incriment at the constructor to keep the count
	int number;
	vector<Drink*> drinks;
	time_t date;
	double totalPrice;
};