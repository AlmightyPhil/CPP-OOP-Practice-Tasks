#include <iostream>
#include <string>
#include <vector>
#include "Admin.h"

using namespace std;

Admin::Admin(string name, string pass) : User(name, pass)
{
}

void Admin::print()
{
	for (Team t : this->getTeams())
	{
		cout << t.getName() << " " << t.getCity() << endl;
	}
}

void Admin::addTeam(Team t)
{
	this->teams.push_back(t);
}

void Admin::removeTeam(Team t)
{
	string teamName = t.getName();
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getName() == teamName)
		{
			teams.erase(teams.begin() + 1);
			break;
		}
	}
}

void Admin::updateTeam(Team t)
{
	string teamName = t.getName();
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getName() == teamName)
		{
			teams.at(i) = t;
			break;
		}
	}
}

vector<Team> Admin::getTeams()
{
	
	return teams;
}
