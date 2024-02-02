// LibraryExamExampleTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Autor.h"
#include "Book.h"
#include "Library.h"
// ENUM can be moved here from book
using namespace std;

int main()
{
	Autor a1("Pesho", "Novelata", "Bulgaria");
	Autor a2("Ivan", "Dobrov", "Russia");
	

	Book b1("Bulgarski nespoluki", a1, love, 2014);
	Book b2("The Iron Fist", a2, biographic, 2019);
	Book b3("Treasure Island", a1, phantasy, 2017);

	vector<Book> bookVector;
	bookVector.push_back(b1);
	bookVector.push_back(b2);
	bookVector.push_back(b3);

	a1.aPrintInfo();
	b1.bPrintInfo();

	Library l1;
	l1.addBook(b1);
	l1.addBook(b2);
	l1.addBook(b3);

	l1.printBookList();

	l1.findBook("Iron");
	
	//Ganre gan;
	//string ganre;
	//int choice;
	//cout << " Enter Gangre: " << endl;
	//cin >> ganre;

	//switch (choice)
	//{
	//case 0:
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//	cout << " Ganre is ok! " << endl;
	//default:
	//	cout << " Invalid! " << endl;
	//}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
