#pragma once
#include <vector>
#include "PlayingCards.h"

class DeckOfCards
{
public:

	DeckOfCards(PlayingCards);
	void addPile(PlayingCards);
	void displayDeck();
	void returnPlayedCardsToDeck();
	void raffleShuffle();

private:

	//vector<PlayingCards> pilesVector;
	vector<string> pilesVector;
	vector<string> currentPlayedCards;
	vector<string> currentCardsInDeck;
};