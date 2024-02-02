#include <iostream>
#include "Car.h"

using namespace std;

//марка, модел, вид, цвят, номер на шасито / VIN(16 до 19 символа), номер на колата и разход на гориво, такса, извървяни км
Car::Car(string b, string m, string t, string c, string vin, string id, double fc, int tax, int td)
{
	setBrand(b);
	setModel(m);
	setType(t);
	setColor(c);
	setVIN(vin);
	setCarID(id);
	setFuelCost(fc);
	setTaxPerDay(tax);
	setTraveledDistance(td);
}

void Car::setBrand(string b)
{
	this->brand = b;
}

void Car::setModel(string m)
{
	this->model = m;
}

void Car::setType(string t)
{
	this->type = t;
}

void Car::setColor(string c)
{
	this->color = c;
}

void Car::setVIN(string vin)
{
	this->VIN = vin;
}

void Car::setCarID(string cid)
{
	this->carID = cid;
}

void Car::setFuelCost(double fc)
{
	this->fuelCost = fc;
}

void Car::setTaxPerDay(int tax)
{
	this->taxPerDay = tax;
}

void Car::setTraveledDistance(int td)
{
	this->traveledDistance = td;
}

string Car::getBrand()
{
	return this->brand;
}

string Car::getModel()
{
	return this->model;
}

string Car::getType()
{
	return this->type;
}

string Car::getColor()
{
	return this->color;
}

string Car::getVIN()
{
	return this->VIN;
}

string Car::getCarID()
{
	return this->carID;
}

double Car::getFuelCost()
{
	return this->fuelCost;
}

int Car::getTaxPerDay()
{
	return this->taxPerDay;
}

int Car::getTraveledDistance()
{
	return this->traveledDistance;
}
