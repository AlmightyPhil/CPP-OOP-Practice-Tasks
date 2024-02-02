#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

Item::Item(string n, double p, int q, string t)
{
	this->setName(n);
	this->setPrice(p);
	this->setQuantity(q);
	this->setType(t);
}

void Item::setName(string n)
{
	this->name = n;
}

void Item::setPrice(double p)
{
	this->price = p;
}

void Item::setQuantity(int q)
{
	this->quantity = q;
}

void Item::setType(string t)
{
	this->type = t;
}

string Item::getName()
{
	return this->name;
}

double Item::getPrice()
{
	return this->price;
}

int Item::getQuantity()
{
	return this->quantity;
}

string Item::getType()
{
	return this->type;
}
