#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int a, int b, string position, double sizeShape, string name) : TwoDimShape(a, b, position, sizeShape, name) /*, b(b)*/
{
    setB(b);
}

double Rectangle::getArea() const
{
    int temp = 0;
    temp = (this->getA() * this->b);
    //cout << temp << endl;
    return temp;
}
void Rectangle::print() const
{
    cout << "Rectangle Print: " << endl;
    cout << this->getName() << endl;
    cout << this->getA() << endl;
    cout << this->getB() << endl;
    cout << this->getPosition() << endl;
    cout << this->getSize() << endl;
    cout << this->getArea() << endl;

}

void Rectangle::setB(int b) {
    this->b = b;
}
int Rectangle::getB() const {
    return this->b;
}

bool operator==(Rectangle const& shapeOne, Rectangle const& shapeTwo)
{
    return (shapeOne.getArea() == shapeTwo.getArea());
}

bool operator>(Rectangle const& shapeOne, Rectangle const& shapeTwo)
{
    return (shapeOne.getArea() > shapeTwo.getArea());
}

bool operator<(Rectangle const& shapeOne, Rectangle const& shapeTwo)
{
    return (shapeOne.getArea() < shapeTwo.getArea());
}
