#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Item
{
public:
	Item(string, double, int, string);
	virtual void print() = 0;
	virtual double calculateSinglePrice() = 0; // to be pure virtual
	virtual double calculatePrice() = 0; // to be pure virtual
	virtual void restock(vector<int>) = 0;
	void setName(string);
	void setPrice(double);
	void setQuantity(int);
	void setType(string);
	string getName();
	double getPrice();
	int getQuantity();
	string getType();
private:
	string name;
	double price;
	int quantity;
	string type;
};