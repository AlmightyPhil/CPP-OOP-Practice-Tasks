#pragma once

#include <iostream>
#include <string>
#include <list>
//#include "User.h"
//#include "Schedule.h"

using namespace std;

class Team
{
public:
	Team(string, string);
	void setName(string);
	void setCity(string);
	// void updateTeam();
	// void getTeams();
	void updatePoints(int);
	string getName();
	string getCity();
	int getPoints();
private:
	string name;
	string city;
	int points;
};