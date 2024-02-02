#pragma once
#include <iostream>
#include <string>
#include "Autor.h"

enum Ganre { classic, child , phantasy , biographic , love };

class Book
{
public:
	Book(string, Autor, Ganre, int);
	void bPrintInfo();
	void setName(string);
	void setGanre(Ganre);
	void setYear(int);
	string getName(); // title
	Ganre getGanre();
	int getYear();
	Autor getAutor();

private:
	string bName;
	Autor autor;
	Ganre ganre;
	int bYear;
	string ganreNames[5];
};