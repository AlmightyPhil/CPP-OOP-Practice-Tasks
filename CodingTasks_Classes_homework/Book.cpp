#include "Book.h"

using namespace std;

Book::Book(string t, string a, int p) : title(t), author(a), pages(p)
{
}

void Book::display()
{
	cout << "Book " << this->title
		<< " written by " << this->author
		<< " containing " << this->pages
		<< " pages." << endl;
}
