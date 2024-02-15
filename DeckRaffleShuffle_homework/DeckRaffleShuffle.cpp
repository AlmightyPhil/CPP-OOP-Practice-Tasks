// DeckRaffleShuffle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DeckOfCards.h"

int main()
{

    PlayingCards c1;

    c1.shuffle();
    c1.showDeck();

    return 0;
}
