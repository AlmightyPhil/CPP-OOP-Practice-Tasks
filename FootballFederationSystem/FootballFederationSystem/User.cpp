#include <iostream>
#include <string>
#include <vector>

#include "User.h"

using namespace std;

User::User(string name, string passw)
{
	setName(name);
	setPassword(passw);
}

void User::setName(string n)
{
	this->name = n;
}

void User::setPassword(string p)
{
	if (p.length() > 4 && p.length() < 20)
	{
		this->password = p;
	}
	else
	{
		string pp;
		while (!(pp.length() > 4 && pp.length() < 20))
		{
			cout << "Incorrect password. Enter new one." << endl;
			cin >> pp;
		}
		this->password = pp;
	}
}

string User::getName()
{
	return this->name;
}

string User::getPassword()
{
	return this->password;
}
