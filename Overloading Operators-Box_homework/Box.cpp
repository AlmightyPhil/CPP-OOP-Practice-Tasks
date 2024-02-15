#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

Box::Box(double width, double lenght, double height)
{
    setWidth(width);
    setLenght(lenght);
    setHeight(height);
}

void Box::setWidth(double width)
{
    this->width = width;
}

void Box::setLenght(double lenght)
{
    this->lenght = lenght;

}

void Box::setHeight(double height)
{
    this->height = height;
}

double Box::getWidth() const
{
    return this->width;
}

double Box::getLenght() const
{
    return this->lenght;
}

double Box::getHeight() const
{
    return this->height;
}
void Box::print() const
{
    cout << "Width:" << getWidth() << endl
            << "Length:" << getLenght() << endl
                 << "Height:" << getHeight() << endl;

}
Box operator+(Box const& box1, Box const& box2)
{
    double newWidth;
    double newLenght;
    if (box1.getWidth() > box2.getWidth())
    {
        newWidth = box1.getWidth();
    }
    else
    {
        newWidth = box2.getWidth();
    }

    if (box1.getLenght() > box2.getLenght())
    {
        newLenght = box1.getLenght();
    }
    else
    {
        newLenght = box2.getLenght();
    }

    double newHeight = box1.getHeight() + box2.getHeight();

    Box newBox(newWidth, newLenght, newHeight);
    return newBox;
}