#include "Game.h"
#include <iostream>

using namespace std;

int c = 0;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{


	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		cout << "STD init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (window != 0) // window init success
		{
			cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);

			if (renderer != 0) // renderer init success
			{
				cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 165, 81, 158, 255);

				TextureManager::Instance()->loadTexture("assets/hannah.bmp", "hannah", renderer);
				
				TextureManager::Instance()->loadTexture("assets/surprisedman.png", "man", renderer);
				
				TextureManager::Instance()->loadTexture("assets/walk-sprite.jpg", "megaman", renderer);

				TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "megaman-walk", renderer);

				// ADD PICTURE TO WINDOW
				//SDL_Surface* tempSurface = SDL_LoadBMP("assets/pic.bmp");
				
				/*
				SDL_Surface* tempSurface = IMG_Load("assets/hannah.bmp");

				texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);


				destinationRectangle.x = sourceRectangle.x = 0;
				destinationRectangle.y = sourceRectangle.y = 0;

				destinationRectangle.h = sourceRectangle.h;
				destinationRectangle.w = sourceRectangle.w;

				//*/

				//destinationRectangle.x = 100;
				//destinationRectangle.y = 100;

				//destinationRectangle.h = sourceRectangle.h = 640;
				//destinationRectangle.w = sourceRectangle.w = 640;

				//sourceRectangle.x = 150;
				//sourceRectangle.y = 150;
				//sourceRectangle.h = 34;
				//sourceRectangle.w = 8;

				//destinationRectangle.w = sourceRectangle.w;
				//destinationRectangle.h = sourceRectangle.h;
			}
			else
			{
				cout << "renderer init failed\n";
				return false;
			}
		}
		else
		{
			cout << "window init failed\n";
			return false;
		}
	}
	else
	{
		cout << "STD init fail\n";
		return false;
	}

	cout << "init success\n";
	running = true;
	return true;
	
}

void Game::render()
{
	/*
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
	SDL_RenderClear(renderer); // !

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);
	SDL_Rect fillRect = { ww / 4, wh / 4, ww/2, wh / 2};
	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(renderer, &fillRect);

	SDL_Rect outlineRect = {ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3};
	SDL_SetRenderDrawColor(renderer, 0x00, 0xFf, 0x00, 0xFF);
	SDL_RenderDrawRect(renderer, &outlineRect);

	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	SDL_SetRenderDrawColor(renderer, 0x00, 0x00F, 0x00, 0x00);
	for (int i = 0; i < wh; i += 4)
	{
		SDL_RenderDrawPoint(renderer, ww / 2, i);
	}

	SDL_Point p = { 10, 20 };
	SDL_RenderDrawPoint(renderer, p.x, p.y);

	SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);
	Shapes::drawCircle(renderer, ww / 2, wh / 2, 250);
	//*/

	//SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);

	//*
	//SDL_RenderClear(renderer);
	//TextureManager::Instance()->drawTexture("hannah", 0, 0, 640, 640, renderer);
	//TextureManager::Instance()->drawTexture("man", 640, 0, 441/*350*/, 640/*508, 574*/, renderer, SDL_FLIP_HORIZONTAL);
	//*/
	// 
	//TextureManager::Instance()->drawTexture("man", 640, 0, 509, 339, renderer, SDL_FLIP_HORIZONTAL);
	//TextureManager::Instance()->drawTexture("hannah", 640, 0, 640, 640, renderer, SDL_FLIP_HORIZONTAL);

	//*
	SDL_RenderClear(renderer);
	TextureManager::Instance()->drawOneFrameFromTexture("megaman-walk", 0, 0, 130, 130, 1, currentFrame, renderer);
	TextureManager::Instance()->drawOneFrameFromTexture("megaman-walk", 0, 0, 130, 130, 2, currentFrame, renderer);
	//*/

	SDL_RenderPresent(renderer);
}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT: running = false;

		default: break;
		}
	}
}

void Game::update()
{
	/*
	cout << "SDL_TICKS           : " << SDL_GetTicks() << "\n";
	cout << "SDL_TICKS / 100     : " << int(SDL_GetTicks() / 100) << "\n";
	cout << "SDL_TICKS / 100 % 10: " << int(((SDL_GetTicks() / 100) % 5)) << "\n\n";
	//*/
	currentFrame = int(((SDL_GetTicks() / 300) % 5)); // % 10 for 10 frames in the animation
	//currentRow = int((()));
	
	/*
	c++;
	if (c % 50 == 0)
	{
		destinationRectangle.x++;
		//sourceRectangle.x++;
	}
	//*/
}

void Game::clean()
{
	cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning()
{
	return Game::running;
}

Game::Game()
{
	
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
	//Game::sourceRectangle.x = Game::sourceRectangle.y = Game::sourceRectangle.w = Game::sourceRectangle.h = 0;
	//Game::destinationRectangle.x = Game::destinationRectangle.y = Game::destinationRectangle.w = Game::destinationRectangle.h = 0;
	
	//this->destinationRectangle.x = 1;
	//this->destinationRectangle.y = 1;
	//this->destinationRectangle.w = 100;
	//this->destinationRectangle.h = 100;
	//this->sourceRectangle.x = 1;
	//this->sourceRectangle.y = 1;
	//this->sourceRectangle.w = 100;
	//this->sourceRectangle.h = 100;
}

Game::~Game()
{
	
}