// LibraryManagementSystem.cpp : This file contains the 'main' function
//

#include <iostream>
#include <string>
#include "Book.h"
#include "Member.h"

using namespace std;

int main()
{
    // creating 2 book objects
    Book b1("Book1", "Author1", "bookID1");
    Book b2("Book2", "Author2", "bookID2");

    //creating an array of books and filling it with the two books
    Book bookArr[2] {b1, b2};

    //creating two pointers pointing to the according book
    Book* bPtr1 = &b1;
    Book* bPtr2 = &b2;

    //creating two members
    Member m1("Member1", 29, "memberID1");
    Member m2("Member2", 22, "memberID2");

    //putting the members into members array
    Member membersArr[2]{m1, m2};

    //simmulating the borrowBook
    membersArr[1].borrowBook(bPtr1);
    membersArr[0].borrowBook(bPtr2);

    /*
        Note: For the borrow book to be more practical we could have a map(bookISBN : memberID),
              since one book can be borrowed only by one person at a time, and also have a vector
              of books in the fields of the member, so we can keep track of how many books he have
              borrowed and in this way be able to limit him from going over some limit.
    */

    return 0;
}