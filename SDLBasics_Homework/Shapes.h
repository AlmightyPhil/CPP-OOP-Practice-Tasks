#pragma once
#include "Game.h"

class Shapes
{
public:

	// static прави така че да може да се вика drawCircle, без да има истанция от класа
	static void drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius);


private:

};