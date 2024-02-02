#pragma once
#include <iostream>
#include <string>

using namespace std;

class Autor
{
public:
	Autor(string, string, string);
	void aPrintInfo();
	void aPrintName();
	void setAName(string);
	void setALastName(string);
	void setNationality(string);

	string getAName();
	string getALastName();
	string getFullName();
	string getNationality();
private:
	string aName;
	string aLastName;
	string nationality;
};