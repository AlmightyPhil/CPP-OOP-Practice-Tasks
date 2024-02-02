#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	//марка, модел, вид, цвят, номер на шасито / VIN(16 до 19 символа), номер на колата и разход на гориво.
	Car(string, string, string, string, string, string, double, int, int);
	virtual void printCarInfo();
	virtual void calculatePrice();
	void setBrand(string);
	void setModel(string);
	void setType(string);
	void setColor(string);
	void setVIN(string);
	void setCarID(string);
	void setFuelCost(double);
	void setTaxPerDay(int);
	void setTraveledDistance(int);
	string getBrand();
	string getModel();
	string getType();
	string getColor();
	string getVIN();
	string getCarID();
	double getFuelCost();
	int getTaxPerDay();
	int getTraveledDistance();

private:
	string brand;
	string model;
	string type;
	string color;
	string VIN;
	string carID;
	double fuelCost;
	int taxPerDay;
	int traveledDistance;
};
