// 16.01.2024.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class Point
{
public:
	Point(int x, int y);
	int  getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
private:
	int x;
	int y;
};
// TODO: Reference additional headers your program requires here.
