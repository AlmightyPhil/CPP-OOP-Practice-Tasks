// NonstopSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Drink.h"
#include "AlcoholicDrink.h"
#include "NonAlcoholicDrink.h"
#include "Food.h"
#include "Order.h"
#include "Client.h"

using namespace std;

int main()
{
    vector<int> alcRestockVector = {10, 5, 5, 5, 5, 5, 5, 5};
    vector<int> nonAlcRestockVector = {20, 10, 10};
    // по-добре да създадем обектите с минимална информация и после пъшваме допълнителната информация
    // всеки път като се добави или махне напитка, трябва да се прекалкулира общата цена
    //Drink d1("Devin", 1.10, 5, "WATER", 1.5); // can't create object, because there is a pure virtual function(=0), can be made with an array of addresses
    //d1.print();

    //AlcoholicDrink ad1("Bushmills", 24.99, 5, "WHISKEY", 0.700, 1.17, 40);
    Drink* aPtr = new AlcoholicDrink("Bushmills", 24.99, 1, "WHISKEY", 0.700, 1.17, 40);
    //cout << aPtr->calculatePrice() << endl;
    //ad1.print();
    //cout << ad1.calculatePrice() << endl;
    //cout << ad1.calculateSinglePrice() << endl;
    //AlcoholicDrink ad2("Russian Standart", 26.99, 3, "VODKA", 0.700, 1.19, 40);
    Drink* aPtr2 = new AlcoholicDrink("Russian Standart", 26.99, 2, "VODKA", 0.700, 1.19, 40);

    //NonAlcoholicDrink nad1("Nestea", 3.20, 20, "ICETEA", 1.5, 0.30);
    Drink* naPtr = new NonAlcoholicDrink("Nestea", 3.20, 3, "ICETEA", 1.5, 0.30);
    //cout << naPtr->calculatePrice() << endl;
    //nad1.print();
    //cout << nad1.calculatePrice() << endl;
    //cout << nad1.calculateSinglePrice() << endl;
    //NonAlcoholicDrink nad2("Fanta", 2.70, 15, "FIZZY", 0.5, 0.33);
    Drink* naPtr2 = new NonAlcoholicDrink("Fanta", 2.70, 2, "FIZZY", 0.5, 0.33);

    //Food f1("Skittles", 0.80, 2, "CANDY", 0.080);
    //f1.print();

    vector<Drink*> drinks;
    drinks.push_back(naPtr);
    drinks.push_back(naPtr2);

    vector<Drink*> drinks2;
    drinks2.push_back(aPtr);
    drinks2.push_back(aPtr2);

    vector<Drink*> drinks3;
    drinks3.push_back(aPtr);
    drinks3.push_back(naPtr);

    //cout << drinks.at(1).calculatePrice();

    //time_t date = time(0); // get current dat/time with respect to system.
    //char* dt = ctime(&date); // convert it into string.
    //cout << "The date and time of the order is: " << dt << endl; // print local date and time.

    Order o1(drinks, time(0));
    //cout << o1.getDate();
    o1.print();
    o1.showDate();
    Order o2(drinks2, time(0));
    o2.addDrink(aPtr);
    o2.print();
    o2.showDate();
    Order o3(drinks3, time(0));
    o3.print();
    o3.showDate();

    list<Order> orderList;
    //vector<Order> orderList;
    orderList.push_back(o1);
    orderList.push_back(o2);

    list<Order> orderList2;
    //vector<Order> orderList2;
    orderList2.push_back(o2);
    orderList2.push_back(o3);

    Client c1("Ivan Ivanov", orderList);
    Client c2("Petar Petrov", orderList2);

    naPtr->restock(nonAlcRestockVector);

    naPtr->print();
    // Drink *aPtr = new AlcoholicDrink(....);
    // order.addDrink(aPtr);
    // или каст, за да разберем някоя напитка дали е алкохолна или неалкохолна или поле при създаване a/na 
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
