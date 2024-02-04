#include <iostream>
#include <string>
#include "Department.h"

using namespace std;

Department::Department(string n) : departmentName(n), numEmployees(0)
{
}

// we add an employee to the array of pointers to employee objeects field
// and then we incriment the field storing the total number of employees
void Department::addEmployee(Employee* e)
{
	this->employees[numEmployees] = e;
	this->numEmployees += 1;
}

// we cycle trought the array of employes and print the info for every emlpoyee
void Department::displayEmployees()
{
	for (int i = 0; i < this->numEmployees; i++)
	{
		this->employees[i]->display();
	}
}
