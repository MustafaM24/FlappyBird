#include <SDL.h>
#include <iostream>
#include "Pipe.hpp"

using namespace std;

// To locate the pipe on our main screen
void Pipe::location()
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

    countP++;
    moverRect.x -= 6;
}

Pipe::~Pipe()
{
}

SDL_Rect Pipe::posi()
{
    return moverRect;
}

// Draw function being called from Unit, whenever we need to draw the pipe on that particular location
void Pipe::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    location();
    srcRect = {2097, 21, 111, 663};
    Unit::draw(gRenderer, assets);
}

//Constructors
Pipe::Pipe()
{
    moverRect = {400, 450, 50, 200};
}

Pipe::Pipe(int x, int y)
{
    moverRect = {x, y, 70, 200};
}