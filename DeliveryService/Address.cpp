#include <iostream>
#include "Address.h"

using namespace std;

Address::Address(string name, string phone, string city, string street)
{
	setName(name);
	setPhone(phone);
	setCity(city);
	setStreet(street);
}

void Address::print()
{
	cout << this->getName() << " " << this->getPhone() << " " 
		<< this->getCity() << " " <<  this->getStreet() << endl;
}

void Address::setName(string n)
{
	this->name = n;
}

void Address::setPhone(string p)
{
	this->phone = p;
}

void Address::setCity(string c)
{
	this->city = c;
}

void Address::setStreet(string s)
{
	this->street = s;
}

void Address::setSenderAddress(string sa)
{
	this->senderAddress = sa;
}

void Address::setRecipientAddress(string ra)
{
	this->recipientAddrss = ra;
}

string Address::getName()
{
	return this->name;
}

string Address::getPhone()
{
	return this->phone;
}

string Address::getCity()
{
	return this->city;
}

string Address::getStreet()
{
	return this->street;
}

//string Address::getSenderAddress()
//{
//	return this->senderAddress;
//}
//
//string Address::getRecipientAddress()
//{
//	return this->recipientAddrss;
//}
