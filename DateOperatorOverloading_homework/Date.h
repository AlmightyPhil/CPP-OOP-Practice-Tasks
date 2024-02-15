#pragma once

#include <iostream>

using namespace std;

class Date
{

public:

   Date(int m = 1, int d = 1, int y = 1900); // default constructor
   void setDate(int, int, int);
   friend ostream& operator<<(ostream&, const Date&);
   friend istream& operator>>(istream&, Date&);
   Date &operator++();
   Date operator++(int);
   Date &operator--();
   Date operator--(int);
   const Date &operator+=(int);
   bool isLeapYear(int) const;
   bool isEndOfMonth(int) const;

private:

   int month;
   int day;
   int year;

   static const int days[]; // array storring the days every month has
   void incrementHelper();
   void decrementHelper();
};
