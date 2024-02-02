#include <iostream>
#include "TwoDimShape.h"

using namespace std;

TwoDimShape::TwoDimShape(int a, int size, int pos, string sh, char ch) : Shape(a)
{
	setSize(size);
	setPosition(pos);
	setSh(sh);
	setCh(ch);
}

void TwoDimShape::print()
{
	cout << " In 2D " << endl;
}

double TwoDimShape::getArea()
{
	cout << " In 2D getArea " << endl;
	return 0.0;
}

void TwoDimShape::setSize(int size)
{
	this->size = size;
}

void TwoDimShape::setPosition(int pos)
{
	this->position = pos;
}

void TwoDimShape::setSh(string sh)
{
	this->sh = sh;
}

void TwoDimShape::setCh(char ch)
{
	this->ch = ch;
}

int TwoDimShape::getSize()
{
	return this->size;
}

int TwoDimShape::getPosition()
{
	return this->position;
}

string TwoDimShape::getSh()
{
	return this->sh;
}

char TwoDimShape::getCh()
{
	return this->ch;
}

