// STD tasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <list> // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator> // ostream_iterator

// prototype for function template printList
template < typename T > void printList(const std::list< T >& listRef);

int main()
{
    cout << "task 2" << endl;

    std::list<int> myList;
    int number = 1;
    //cout << " enter number or 0 for end" << endl;
    //cin >> number;
    while (number != 0) {
        cout << " enter number or 0 for end" << endl;
        cin >> number;
        if (number != 0)
        {
            myList.push_back(number);
        }
        else
        {
            break;
        }
    }

    //printList(myList);

    // calculate sum with pop from List
    /*
    int sum = 0;

    size_t listSize = myList.size();
    for (int i = 0; i < listSize; i++)
    {
        sum = sum + myList.front();
        myList.pop_front();
    }
    cout << endl;
    printList(myList);
    cout << sum << endl;
    //*/

    /*
    int sum2 = 0;

    for (int elem : myList)
    {
        cout << "element is " << elem << endl;
        //elem = 99; // not written in to the list, but can be used in the for body
        sum2 = sum2 + elem;
    }
    //*/
    int sum3 = 0;

    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << endl;
        sum3 = sum3 + *it;
        //*it = 222; // can overwrite the data in the list
    }
    printList(myList);
    cout << sum3 << endl;

}

// printList function template definition; uses 
// ostream_iterator and copy algorithm to output list elements
template < typename T > void printList(const std::list< T >& listRef)
{
    if (listRef.empty()) // list is empty
        cout << "List is empty";
    else
    {
        std::ostream_iterator< T > output(cout, " ");
        std::copy(listRef.begin(), listRef.end(), output);
    } // end else
} // end function printList
