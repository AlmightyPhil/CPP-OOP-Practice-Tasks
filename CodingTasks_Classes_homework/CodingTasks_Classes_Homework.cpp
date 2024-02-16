// CodingTasks_Classes_Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
	Book b1("Book1", "author1", 100);
	Book b2("Book2", "author2", 320);

	b1.display();
	b2.display();

	return 0;
}
