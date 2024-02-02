#pragma once

#include <iostream>
#include <string>
#include <list>

using namespace std;

// roditelskiq klasza administraciq, refer, fenove

class User
{
public:
	User(string, string);
	void setName(string);
	void setPassword(string);
	string getName();
	string getPassword();

private:
	string name;
	string password;
};

