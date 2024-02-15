#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PlayingCards
{
public:

	PlayingCards();
	void formDeck();
	void showDeck();
	void shuffle();
	vector<string> deck;

private:

	vector<string> type = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	vector<string> suit{"Spades", "Diamonds", "Hearts", "Clubs"};
	
	// possible one more parameter to remembr which deck the cards belongs too

};