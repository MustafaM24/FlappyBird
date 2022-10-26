#include <SDL.h>
#include <iostream>
#include "GameOver.hpp"

void GameOver::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    srcRect = {1274, 204, 466, 101};
    Unit::draw(gRenderer, assets);
}

GameOver::GameOver()
{
    moverRect = {275, 250, 500, 150};
}

SDL_Rect GameOver::posi()
{
    return moverRect;
}

GameOver::~GameOver()
{
}