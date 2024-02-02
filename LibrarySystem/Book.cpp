#include <iostream>
#include <string.h>
#include "Book.h"

using namespace std;

Book::Book(string n, Autor a, Ganre g, int y)  : autor(a)
{
	this->setName(n);
	this->setGanre(g);
	this->setYear(y);
	ganreNames[0] = "classic";
	ganreNames[1] = "child";
	ganreNames[2] = "phantasy";
	ganreNames[3] = "biographic";
	ganreNames[4] = "love";
	// на другите езици при инициализация в хедъра може да се направи накуп с ganreNames[] = {"classic", "child", "phantasy", "biographic", "love"};
}

void Book::bPrintInfo()
{
	cout << ganreNames[this->ganre] << " book " << this->getName() << " by "
		<< this->autor.getFullName() << " written at year " << this->getYear() << endl;
}

void Book::setName(string n)
{
	this->bName = n;
}

void Book::setGanre(Ganre g)
{
	this->ganre = g;
}

void Book::setYear(int y)
{
	this->bYear = y;
}

string Book::getName()
{
	return this->bName;
}

Ganre Book::getGanre()
{
	return this->ganre;
}

int Book::getYear()
{
	return this->bYear;
}

Autor Book::getAutor()
{
	return this->autor;
}
