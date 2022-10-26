#include <SDL.h>
#include <iostream>
#include "Pipe2.hpp"

using namespace std;

// To locate the pipe on our main screen
void Pipe2::location()
{

    if (countP == 0)
    {
        pipe = 1180;
    }
    else if (countP == 1)
    {
        pipe = 1230;
        countP = -1;
    }
    if (moverRect.x < -50)
    {
        moverRect.y = (rand() % 600);
        moverRect.x = 1200;
    }

    moverRect.x -= 6;
    countP++;
}

SDL_Rect Pipe2::posi()
{
    return moverRect;
}

void Pipe2::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    location();
    srcRect = {2097, 21, 111, 663};
    Unit::draw(gRenderer, assets);
}

//Constructors
Pipe2::Pipe2()
{
    moverRect = {600, 0, 50, 200};
}

Pipe2::Pipe2(int x, int y)
{
    moverRect = {x, y, 50, 160};
}
