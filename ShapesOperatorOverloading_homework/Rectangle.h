#pragma once
#include <iostream>
#include <string>
#include "TwoDimShape.h"

using namespace std;

class Rectangle : public TwoDimShape
{

public:
    Rectangle(int, int, string, double, string = "Rectangle");
    friend bool operator==(Rectangle const&, Rectangle const&);
    friend bool operator>(Rectangle const&, Rectangle const&);
    friend bool operator<(Rectangle const&, Rectangle const&);
    void setB(int);
    int getB() const;
    double getArea() const;
    virtual void print() const;
private:
    int b;

};