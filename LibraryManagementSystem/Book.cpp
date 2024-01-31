#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

Book::Book(string t, string a, string isbn) : title(t), autor(a), ISBN(isbn)
{
	
}

// display() prints the book fields
void Book::display()
{
	cout << "Book title " << this->title
		<< " written by " << this->autor
		<< " with ISBN " << this->ISBN << endl;
}

