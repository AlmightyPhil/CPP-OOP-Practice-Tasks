
#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

int main()
{
    Box b1(10.5, 6.3, 7.2);
    Box b2(5.5, 2.7, 8.4);

    Box b3 = b1 + b2;
    b3.print();
    return 0;
}