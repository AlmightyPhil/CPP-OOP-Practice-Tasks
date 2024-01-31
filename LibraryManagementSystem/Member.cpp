#include <iostream>
#include <string>

#include "Member.h"

using namespace std;

Member::Member(string n, int a, string id) : name(n), age(a), memberID(id)
{
}

// display() prints the member fields
void Member::display()
{
	cout << "Member with ID: " << this->memberID
		<< " named " << this->name
		<< " and age of " << this->age << endl;
}

//--------------------------------------------------------------------------------------
//
// borrowBook() mehtod that will just print the ID of the member that borrowed the
//		book and the details of the borrowed book
//
//--------------------------------------------------------------------------------------
void Member::borrowBook(Book* b)
{
	cout << "Member with ID " << this->memberID << " has borrowed book with ";
	b->display();
	
}
