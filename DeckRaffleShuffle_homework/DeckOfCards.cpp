#include <iostream>
#include <cstdlib>
#include "DeckOfCards.h"

DeckOfCards::DeckOfCards(PlayingCards c1)
{
	this->addPile(c1);

}

void DeckOfCards::addPile(PlayingCards nc)
{

	//this->pilesVector.push_back(nc);
	for (int i = 0; i < nc.deck.size(); i++)
	{
		this->pilesVector.push_back(nc.deck[i]);
	}

	this->currentCardsInDeck = this->pilesVector;
}

void DeckOfCards::displayDeck()
{
	for (int i = 0; i < currentCardsInDeck.size(); i++)
	{
		//pilesVector[i].showDeck();
		cout << "ID: " << i << " " << currentCardsInDeck[i] << endl;
	}
}

void DeckOfCards::returnPlayedCardsToDeck()
{
	for (int i = 0; i < currentPlayedCards.size(); i++)
	{
		currentCardsInDeck.push_back(currentPlayedCards[i]);
	}

	currentPlayedCards.clear();
}

void DeckOfCards::raffleShuffle()
{
	//*
	vector<string> tempCardPile1, tempCardPile2;

	int random = rand()%50 + 1; // can actually make it be completely random at every run of the program
	cout << "We cut on card number: " << random << ", so cards with IDs from 0 to " << random-2 
		<< "(" << random - 1 << "cards) go to pile 1, and rest go to pile 2. " << endl << endl;

	for (int i = 0; i < random - 1; i++)
	{
		tempCardPile1.push_back(this->currentCardsInDeck[i]);
		
	}


	this->currentPlayedCards.push_back(tempCardPile1[0]);
	cout << "Card flipped from pile 1: " << this->currentPlayedCards.front() << endl;

	for (int i = random - 1; i < this->currentCardsInDeck.size(); i++)
	{
		tempCardPile2.push_back(this->currentCardsInDeck[i]);
	}

	this->currentPlayedCards.push_back(tempCardPile2[0]);
	cout << "Card flipped from pile 2: " << this->currentPlayedCards[1] << endl;

	tempCardPile1.erase(tempCardPile1.begin());
	tempCardPile2.erase(tempCardPile2.begin());

	currentCardsInDeck.clear();

	//cout << "Temp vector 1: " << endl;
	for (int i = 0; i < tempCardPile1.size(); i++)
	{
		//cout << tempCardPile1[i] << endl;
		currentCardsInDeck.push_back(tempCardPile1[i]);
	}

	//cout << "Temp vector 2: " << endl;
	for (int i = 0; i < tempCardPile2.size(); i++)
	{
		//cout << tempCardPile2[i] << endl;
		currentCardsInDeck.push_back(tempCardPile2[i]);
	}
	//*/
}
