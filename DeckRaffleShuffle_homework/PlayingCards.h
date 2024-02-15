#pragma once

#include <iostream>
#include <string>

using namespace std;

class PlayingCards
{
public:

	PlayingCards();
	void formDeck();
	void showDeck();
	void shuffle();

private:

	string type[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	string suit[4] = {"Spades", "Diamonds", "Hearts", "Clubs"};
	string deck[52];

};