// Date class member-function definitions.
#include <iostream>
#include <iomanip>
#include "Date.h"

using std::setw;

const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date( int m, int d, int y )
{
    setDate( m, d, y );
}


void Date::setDate( int mm, int dd, int yy )
{
    month = ( mm >= 1 && mm <= 12 ) ? mm : 1;
    year = ( yy >= 1900 && yy <= 2100 ) ? yy : 1900;

    // leap year check
    if ( month == 2 && isLeapYear( year ) )
        day = ( dd >= 1 && dd <= 29 ) ? dd : 1;
    else
        day = ( dd >= 1 && dd <= days[ month ] ) ? dd : 1;
}

Date &Date::operator++()
{
    incrementHelper();
    return *this;
}

Date Date::operator++( int )
{
    Date temp = *this;
    incrementHelper();

    return temp;
}

Date &Date::operator--()
{
    decrementHelper();

    return *this;
}

Date Date::operator--( int )
{
    Date temp = *this;
    decrementHelper();

    return temp;
}

const Date &Date::operator+=( int additionalDays )
{
    for ( int i = 0; i < additionalDays; i++ )
        incrementHelper();

    return *this; // enables cascading
}

bool Date::isLeapYear( int testYear ) const
{
    if ( testYear % 400 == 0 ||
            ( testYear % 100 != 0 && testYear % 4 == 0 ) )
        return true;
    else
        return false;
}

bool Date::isEndOfMonth( int testDay ) const
{
    if ( month == 2 && isLeapYear( year ) )
        return testDay == 29;
    else
        return testDay == days[ month ];
}

void Date::incrementHelper()
{
    if ( !isEndOfMonth( day ) )
        day++;
    else if ( month < 12 )
    {
        month++;
        day = 1;
    }
    else
    {
        year++;
        month = 1;
        day = 1;
    }
}

void Date::decrementHelper()
{
    if ( day != 1 )
        day--;
    else if ( month < 12 )
    {
        if(isLeapYear ( year ) && month == 3)
        {
            day = 29;
            month--;
        }
        else
        {
            day = days[month];
            month--;
        }
    }
    else
    {
        year--;
        month = 12;
        day = 31;
    }
}

ostream &operator<<( ostream &output, const Date &d )
{
    static char *monthName[ 13 ] = { "", "January", "February",
                                     "March", "April", "May", "June", "July", "August",
                                     "September", "October", "November", "December"
                                   };
    output << monthName[ d.month ] << ' ' << d.day << ", " << d.year;
    return output; // enables cascading
}
istream &operator>>( istream &input, Date &date )
{
    input >> setw( 2 ) >>date.day; // input day
    input.ignore(); // skip dash(-) if present
    input >>  date.month; // input month
    input.ignore(); // skip dash(-) if present
    input >> setw( 4 ) >> date.year; // input line
    return input; // enables cin while using >> multiple times in one program line
}