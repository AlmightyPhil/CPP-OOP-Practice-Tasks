// FootballFederationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include "User.h"
#include "Team.h"
#include "Admin.h"
#include "Schedule.h"

int main()
{
	User user1("Ivan", "podulgaparola");

	Team t1("Liverpool", "Liverpool");
	cout << t1.getPoints() << endl;
	/*
	team1.updatePoints(3);
	cout << team1.getPoints() << endl;
	//*/

	Team t2("Barcelona", "Barcelona");

	Team t3("Inter", "Inter");

	Team t4("Milano", "Milano");

	Admin a1("Admin1", "Tegavaparola1!");
	a1.addTeam(t1);
	a1.addTeam(t2);
	a1.addTeam(t3);
	a1.addTeam(t4);

	//a1.print();

	Team t5("Liverpool", "Haskovo");
	a1.updateTeam(t5);

	//for (Team t : a1.getTeams())
	//{
	//	cout << t.getName() << " " << t.getCity() << endl;
	//}
	a1.print();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
