#include <SDL.h>
#include "unit.hpp"
#include <iostream>
#include "Collission.hpp"

//Draw function inherited from Unit class
void Collission::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    srcRect = {512, 368, 162, 165};
    Unit::draw(gRenderer, assets);
}

Collission::Collission(int x, int y)
{
    moverRect = {x, y - 175 / 2, 175, 175};
}

SDL_Rect Collission::posi()
{
    return moverRect;
}

Collission::~Collission()
{
}