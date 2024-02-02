#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Autor.h"
#include "Book.h"

using namespace std;

class Library
{
public:
	//Library(vector<Book>);
	void printBookList();
	void addBook(Book);
	void findBook(string);

private:
	vector<Book> books;
};