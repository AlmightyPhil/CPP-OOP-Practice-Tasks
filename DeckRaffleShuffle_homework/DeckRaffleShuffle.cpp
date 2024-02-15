// DeckRaffleShuffle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DeckOfCards.h"

int main()
{
    // defines two basic PlayingCards objects
    PlayingCards c1, c2;

    // shuffles first playing cards pile
    c1.shuffle();

    // puts the first pile into the playing deck
    DeckOfCards d1(c1);
    d1.displayDeck(); // displays the playing deck

    // adds the seconds pile into the playing pile
    //d1.addPile(c2);
    //d1.displayDeck(); // again display the playing deck

    d1.raffleShuffle(); // initialize the raffleShuffle mehtod
    d1.displayDeck(); // check what changes it had to the deck

    //d1.returnPlayedCardsToDeck(); // return the played by the raffleShuffle cards back to the deck
    //d1.displayDeck(); // check if the returned successfully to the deck

    return 0;
}
