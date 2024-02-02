#include <iostream>
#include <vector>
#include <string>
#include "Address.h"

using namespace std;

class Package
{
public:
	Package(double, double, Address, Address);
	double calculateCost();
	void print();
	void setWeight(double);
	void setBasePrice(double);

	double getWeight();
	double getBasePrice();

private:
	double weight;
	double basePrice;
	Address senderAddress;
	Address recipientAddress;

};