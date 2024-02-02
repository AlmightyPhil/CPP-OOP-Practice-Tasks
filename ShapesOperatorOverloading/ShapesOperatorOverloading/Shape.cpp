#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int side) : a(side) {}
void Shape::setA(int side)
{
    this->a = side;
}
int Shape::getA() const
{
    return this->a;
}

void Shape::print() const
{
    cout << "In shape, the side is: " << a << endl;
}

double Shape::getArea() const
{
    cout << "In shape, the area is: " << endl;
    return 0.0;
}
// Връща true ако лицата са равни и false ако не са
bool operator==(Shape const& shapeOne, Shape const& shapeTwo)
{
    return shapeOne.getArea() == shapeTwo.getArea();
}

// Връща true ако лицето на първия shape е по-голямо от това на втория и false ако не е
bool operator>(Shape const& shapeOne, Shape const& shapeTwo)
{
    return shapeOne.getArea() > shapeTwo.getArea();

}

// Връща true ако лицето на първия shape е по-малко от това на втория и false ако не е
bool operator<(Shape const& shapeOne, Shape const& shapeTwo)
{
    return shapeOne.getArea() < shapeTwo.getArea();
}