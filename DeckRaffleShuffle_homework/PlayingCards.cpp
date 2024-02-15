#include <iostream>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include "PlayingCards.h"

PlayingCards::PlayingCards()
{
	this->formDeck();
}

void PlayingCards::formDeck()
{
	// string s1 = " of ";

	for (int i = 0; i < 13; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			this->deck[k * 13 + i] = this->type[i] + " of " + this->suit[k];
		}
	}

}

void PlayingCards::showDeck()
{
	for (int i = 0; i < 13; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			cout << this->deck[k * 13 + i] << endl;
		}
	}

}

void PlayingCards::shuffle()
{
	// obtain a time-based seed:
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

	std::shuffle(this->deck[0], this->deck[51], std::default_random_engine(seed));
}
