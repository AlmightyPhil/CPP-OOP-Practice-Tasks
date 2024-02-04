#pragma once

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Department
{
public:

	Department(string);
	void addEmployee(Employee*);
	void displayEmployees();

private:

	string departmentName;
	Employee *employees[10];
	int numEmployees;

};