#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape
{
private:
    int a;
public:
    Shape(int);
    friend bool operator==(Shape const&, Shape const&);
    friend bool operator>(Shape const&, Shape const&);
    friend bool operator<(Shape const&, Shape const&);
    virtual double getArea() const;
    virtual void print() const;
    virtual void setA(int);
    virtual int getA() const;
};
