// DateOperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.cpp" // Date class definition

using std::cout;
using std::cin;
using std::endl;

int main()
{
    /*
    Date d1; // defaults to January 1, 1900
    Date d2(12, 27, 1992); // December 27, 1992
    Date d3(0, 99, 8045); // invalid date

    cout << "d1 is " << d1 << endl << "d2 is " << d2 << endl << "d3 is " << d3 << endl;
    cout  << "d2 += 7 is " << (d2 += 7) << endl;

    d3.setDate(2, 28, 1992);
    cout << " d3 is " << d3 << endl;;
    cout << "++d3 is " << ++d3 << " (leap years have 29th of Feb)" << endl;

    Date d4(7, 13, 2002);

    cout << "Testing the prefix increment operator:" << endl
        << "  d4 is " << d4 << endl;
    cout << "++d4 is " << ++d4 << endl;
    cout << "  d4 is " << d4 << endl;

    cout << "Testing the postfix increment operator:" << endl
        << "  d4 is " << d4 << endl;
    cout << "d4++ is " << d4++ << endl;
    cout << "  d4 is " << d4 << endl;
    //*/

    Date newDate;

    cout << "Enter the date in the form dd-mm-yyyy:" << endl;
    cin >> newDate;

    cout << "Inputed date: " << newDate << endl;

    cout << "newDate is " << --newDate << endl;
    cout << "newDate is " << newDate-- << endl;
    cout << "newDate is " << newDate << endl;

    return 0;
}