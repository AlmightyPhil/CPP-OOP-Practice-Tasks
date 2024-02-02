#pragma once

#include <iostream>
#include <string>

using namespace std;

class Box
{
public:

    Box(double, double, double);
    void setWidth(double);
    void setLenght(double);
    void setHeight(double);
    double getWidth() const;
    double getLenght() const;
    double getHeight() const;
    void print() const;
    friend Box operator+(Box const&, Box const&);

private:

    double width;
    double lenght;
    double height;

};
