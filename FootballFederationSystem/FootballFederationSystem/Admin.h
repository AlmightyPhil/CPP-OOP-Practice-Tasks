#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "Team.h"
#include "Schedule.h"

using namespace std;

class Admin : public User
{
public:
	Admin(string, string);
	void print();
	void addTeam(Team);
	void removeTeam(Team);
	void updateTeam(Team); // promeni za otbora, dane proverqvame kakvo tochno e smeneno, ami napravo noviq obekt promenq stariq
	vector<Team> getTeams();

	// createSchedule() // empty at start and not trough constructor
	// updateSchedule() // pri otlagane na mach ili nqakva druga smqna, change referee(star, nov) or date(stara, nova) - rovi za starite, namira novite
	// refera ima metod setResult(prima sreshta) i v tqloto promenq resultata za neq
	// setPoints() - spored resultata ot sreshtata da dobavq tochki na otborite/v klasiraneto

private:
	vector<Team> teams; // vector/list of teams
	
	// schedule object;

};