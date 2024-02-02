#include "Library.h"

using namespace std;

//Library::Library(vector<Book> vb)
//{
//}

void Library::printBookList()
{
	// for ( int i : arr) {}
	for (Book book : books)
	{
		book.bPrintInfo();
	}
}

void Library::addBook(Book b)
{
	this->books.push_back(b);
}

void Library::findBook(string text)
{
	for (Book book : books)
	{
		if (book.getName().find(text) != -1/* != string::npos */)
		{
			cout << " We found the book! " << endl;
			book.bPrintInfo();
			break; // ako iskame samo 1 kniga
		}
	}
}
