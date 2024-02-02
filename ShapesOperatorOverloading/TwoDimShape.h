#pragma once

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;
class TwoDimShape : public Shape
{
private:
    //може да трябва поле за запълване
    int b;
    string position;
    double sizeShape;
    string name;

public:
    TwoDimShape(int, int, string, double, string);
    //TwoDimShape(int, string, double, string); // конструктор без страната б
    friend bool operator==(TwoDimShape const&, TwoDimShape const&);
    friend bool operator>(TwoDimShape const&, TwoDimShape const&);
    friend bool operator<(TwoDimShape const&, TwoDimShape const&);
    //virtual void setA(int);
    //virtual int getA();
    virtual void setB(int);
    virtual int getB() const;
    void setName(string);
    void setPosition(string);
    void setSize(double);
    string getName() const;
    double getSize() const;
    string getPosition() const;
    virtual double getArea() const;
    virtual void print() const;

};