// EmployeeManagementSystem.cpp : This file contains the 'main' function
//

#include <iostream>
#include <string>
#include "Employee.h"
#include "Department.h"


using namespace std;

int main()
{
    // We create 5 employees with some variety of positions
    Employee e1("EmpName1", 1, "Department Director");
    Employee e2("EmpName2", 2, "Project Manager");
    Employee e3("EmpName3", 3, "Team Lead");
    Employee e4("EmpName4", 4, "Programmer");
    Employee e5("EmpName5", 5, "Programmer");

    // we push the employees in an array of employees
    // might be unneeded for the task
    Employee empArr[]{ e1, e2, e3, e4, e5 };

    // we create 2 departments
    Department d1("Department 1");
    Department d2("Department 2");

    // we ecreate 2 poiinters to the first two employees accordingly
    Employee* ePtr1 = &e1;
    Employee* ePtr2 = &e2;

    // we add the first 2 employees to the first department
    d1.addEmployee(ePtr1);
    d1.addEmployee(ePtr2);

    // we display all the employees of the first department
    d1.displayEmployees();

    return 0;
}
