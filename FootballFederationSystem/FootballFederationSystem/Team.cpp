#include <iostream>
#include <string>
#include <vector>
#include "Team.h"

using namespace std;

Team::Team(string n, string c)
{
	this->setName(n);
	this->setCity(c);
	this->points = 0;
}

void Team::setName(string n)
{
	this->name = n;
}

void Team::setCity(string c)
{
	this->city = c;
}

void Team::updatePoints(int newPoints)
{
	this->points += newPoints;
}

string Team::getName()
{
	return this->name;
}

string Team::getCity()
{
	return this->city;
}

int Team::getPoints()
{
	return this->points;
}
