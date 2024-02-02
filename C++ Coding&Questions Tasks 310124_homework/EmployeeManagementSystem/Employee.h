#pragma once

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:

	Employee(string, int, string);
	void display();

private:

	string name;
	int employeeID;
	string position;

};