#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include "Order.h"

using namespace std;

int Order::numberOfOrders = 0;

Order::Order(vector<Drink*> v, time_t d) // , double tp)
{
	
	this->drinks = v;
	this->setDate(d);
	this->calculateTotalPrice();
	numberOfOrders++;
	this->number = numberOfOrders;

}

void Order::addDrink(Drink* dr)
{
	this->drinks.push_back(dr);
	this->calculateTotalPrice();
}

void Order::print()
{
	for (int i = 0; i < drinks.size(); i++)
	{
		drinks.at(i)->print();
		
	}

	cout << "Total order price is: " << this->getTotalPrice() << endl;
}

void Order::showDate() const
{
	char* dt = ctime(&this->date); // convert it into string.
	cout << "The date and time of the order is: " << dt << endl; // print date of order creation
}

void Order::calculateTotalPrice()
{
	double value = 0.0;
	//double temp = 0.0;
	//cout << drinks.size() << endl;

	for (int i = 0; i < drinks.size(); i++)
	{
		//drinks.at(i).print();
		//cout << temp << endl;
		value += drinks.at(i)->calculatePrice();

	}
	//cout << value << endl;
	this->totalPrice = value;
}

void Order::setDate(time_t d)
{
	this->date = d;
}

double Order::getTotalPrice() const
{
	return this->totalPrice;
}

time_t Order::getDate()
{
	
	return this->date;
}
