#include <iostream>
#include <string>
#include "Shape.h"
#include "TwoDimShape.h"

using namespace std;
//TwoDimShape::TwoDimShape(int a, int b, string position, double sizeShape, string name): Shape(a), b(b), position(position), sizeShape(sizeShape), name(name) {}TwoDimShape::TwoDimShape(int a, int b, string position, double sizeShape, string name): Shape(a), b(b), position(position), sizeShape(sizeShape), name(name) {}TwoDimShape::TwoDimShape(int a, int b, string position, double sizeShape, string name): Shape(a), b(b), position(position), sizeShape(sizeShape), name(name) {}
TwoDimShape::TwoDimShape(int a, int b, string position, double sizeShape, string name) : Shape(a), b(b), position(position), sizeShape(sizeShape), name(name)
{
   // setB(b);
}

double TwoDimShape::getArea() const
{
    //cout << "In TwoDimShape getArea area" << endl;
    return this->getA() * this->getB();
}
void TwoDimShape::print() const
{
    cout << "In TwoDim print" << endl;
}
//
//int TwoDimShape::getA()
//{
//    return this->getA();
//}

void TwoDimShape::setB(int b) {
    this->b = b;
}
int TwoDimShape::getB() const {
    return this->b;
}
void TwoDimShape::setName(string name)
{
    this->name = name;
}
void TwoDimShape::setPosition(string position)
{
    this->position = position;
}
void TwoDimShape::setSize(double sizeShpape)
{
    this->sizeShape = sizeShape;
}
string TwoDimShape::getName() const
{
    return this->name;
}
double TwoDimShape::getSize() const
{
    //  cout<<"the size is: 0";
    return this->sizeShape;
}
string TwoDimShape::getPosition() const
{
    //cout<<"the position is (0,0;" << endl;
    return this->position;
}

bool operator==(TwoDimShape const& shapeOne, TwoDimShape const& shapeTwo)
{
    return (shapeOne.getArea() == shapeTwo.getArea());
}

bool operator>(TwoDimShape const& shapeOne, TwoDimShape const& shapeTwo)
{
    return (shapeOne.getArea() > shapeTwo.getArea());
}

bool operator<(TwoDimShape const& shapeOne, TwoDimShape const& shapeTwo)
{
    return (shapeOne.getArea() < shapeTwo.getArea());
}
