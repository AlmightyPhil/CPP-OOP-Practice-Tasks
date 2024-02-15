#include <iostream>
#include <algorithm>    // std::shuffle
//#include <random>       // std::default_random_engine
//#include <chrono>       // std::chrono::system_clock
//#include <ctime>        // std::time
//#include <cstdlib>      // std::rand, std::srand
#include "PlayingCards.h"

PlayingCards::PlayingCards()
{
	this->formDeck();
}

void PlayingCards::formDeck()
{
	//version with arrays
	/*
	for (int i = 0; i < 13; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			 this->deck[k * 13 + i] = this->type[i] + " of " + this->suit[k];		
		}
	}
	//*/

	//version with vectors
	//*
	for (int i = 0; i < suit.size(); i++)
	{
		for (int k = 0; k < type.size(); k++)
		{
			//cout << this->type[i] << " of " << this->suit[k];
			//cout << this->type[i].at(0);
			string temp = this->type[k] + " of " + this->suit[i];
			this->deck.push_back(temp);
		}
	}
	//*/
;
}

void PlayingCards::showDeck()
{
	// version with arrays
	/*
	for (int i = 0; i < 13; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			cout << this->deck[k * 13 + i] << endl;
		}
	}
	//*/

	// version with vectors
	for (int i = 0; i < deck.size(); i++)
	{
		cout << this->deck[i] << endl;
	}

}

void PlayingCards::shuffle()
{
	// version not working with strings
	/*
	// obtain a time-based seed:
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

	std::shuffle(this->deck[0], this->deck[51], std::default_random_engine(seed));
	//*/

	random_shuffle(this->deck.begin(),this->deck.end());
}
