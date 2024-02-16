// CodingTasks_Polymorphism_Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{

    Rectangle r1("blue", 10.0, 15.2);
    r1.draw();
    
    Shape* sPtr1 = &r1;
    sPtr1->printArea(sPtr1);


    Circle c1("red", 7.2);
    c1.draw();

    sPtr1 = &c1;
    sPtr1->printArea(sPtr1);

    return 0;
}

