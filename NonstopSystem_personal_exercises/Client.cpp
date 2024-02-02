#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "Client.h"

using namespace std;

Client::Client(string cn, list<Order> ord)
{
	this->setClientName(cn);
	this->ordersList = ord;
}

void Client::addOrder(Order o)
{
	this->ordersList.push_back(o);
}

void Client::print()
{
	cout << " Client's print! " << endl;
}

void Client::setClientName(string cn)
{
	this->clientName = cn;
}

string Client::getClientName()
{
	return this->clientName;
}
