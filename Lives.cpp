#include "Lives.hpp"
#include <iostream>

using namespace std;

void Lives::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //Drawing function with positions initialised
{
    srcRect = {1800, 43, 128, 120};
    Unit::draw(gRenderer, assets);
}

Lives::~Lives()
{
}

Lives::Lives(int l) //moverRect updates the position of the lives
{
    xpos = 0;
    x_velocity = 0;
    ypos = 0;
    y_velocity = 0;

    if (l == 1)
    {
        moverRect = {0, 0, 100, 60};
    }
    else if (l == 2)
    {
        moverRect = {50, 0, 100, 60};
    }
    else if (l == 3)
    {
        moverRect = {100, 0, 100, 60};
    }
    else if (l == 4)
    {
        moverRect = {150, 0, 100, 60};
    }
    else if (l == 5)
    {
        moverRect = {200, 0, 100, 60};
    }
}
