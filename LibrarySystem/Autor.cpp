#include <iostream>
#include <string>
#include "Autor.h"

using namespace std;

Autor::Autor(string n, string ln, string nat)
{
	this->setAName(n);
	this->setALastName(ln);
	this->setNationality(nat);
}


void Autor::aPrintInfo()
{
	cout << " Autor is: " << this->getAName()
			<< " " << this->getALastName() << " from " 
				<< this->getNationality() << endl;
}

void Autor::aPrintName()
{
	cout << " Autor's first name: " << this->getAName()
			<< " Autor's last name: " << this->getALastName() << endl;
}

void Autor::setAName(string an)
{
	this->aName = an;
}

void Autor::setALastName(string aln)
{
	this->aLastName = aln;
}

void Autor::setNationality(string nat)
{
	this->nationality = nat;
}

string Autor::getAName()
{
	return this->aName;
}

string Autor::getALastName()
{
	return this->aLastName;
}

string Autor::getFullName()
{
	return this->aName+" "+this->aLastName;
}

string Autor::getNationality()
{
	return this->nationality;
}
