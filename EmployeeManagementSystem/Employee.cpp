#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(string n, int id, string p) : name(n), employeeID(id), position(p)
{
}

// We display/print the Employee fields
void Employee::display()
{
	cout << " Employee with ID: " << this->employeeID
		<< " name " << this->name << " and position " << this->position << endl;
}
