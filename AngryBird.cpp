#include "AngryBird.hpp"
#include <iostream>

using namespace std;

//Drawing the angrybird
void angrybird::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    srcRect = {2346, 6, 512, 501};
    Unit::draw(gRenderer, assets);
}

//Constructor, initializing values
angrybird::angrybird()
{
    xpos = 4;
    x_velocity = 0;
    ypos = 4;
    y_velocity = 0;

    moverRect = {0, 300, 100, 60};
}

int angrybird::getmoverx()
{
    return moverRect.x;
}

int angrybird::getmovery()
{
    return moverRect.y;
}

//For the movement of the angrybird

void angrybird::mover()
{
    if (position == 0)
    {
        SDL_Delay(10);
        moverRect.y += 1;
        if (moverRect.y > 580)
        {
            position = 1;
            moverRect.y = 580;
        }
    }

    else if (position == 1)
    {
        SDL_Delay(10);
        moverRect.y -= 1;
        if (moverRect.y < 0)
        {
            position = 0;
            moverRect.y = 0;
        }
    }
}

angrybird::~angrybird()
{
}
