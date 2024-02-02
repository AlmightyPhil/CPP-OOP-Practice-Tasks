#pragma once

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "Order.h"

class Client
{
public:
	Client(string, list<Order>);
	void addOrder(Order);
	void print();
	void setClientName(string);
	string getClientName();

private:
	string clientName;
	list<Order> ordersList;
};