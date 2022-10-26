#include "Bird.hpp"
#include <iostream>

//Positioning done through vector & Bird constantly moves in the background
using namespace std;
void Bird::birdfly()
{
    if (counth == 0)
    {
        bb = 2870;
    }
    else if (counth == 4)
    {
        bb = 2916;
    }
    else if (counth == 8)
    {
        bb = 2962;
        counth = -1;
    }
    counth++;

    srcRect = {bb, 6, 34, 24};
    moverRect.x += 2;
}
Bird::~Bird()
{
}

void Bird::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) // Draw func, Inherited from Unit
{

    Bird::birdfly();

    Unit::draw(gRenderer, assets);
}

Bird::Bird()
{
    xpos = 0;
    x_velocity = 0;
    ypos = 0;
    y_velocity = 0;

    moverRect = {25, 40, 50, 25};
}

//Gives output in the terminal for each key pressed to control the movement of our bird
void Bird::handleEvent(SDL_Event &e)
{
    if (e.type == SDL_KEYDOWN && e.key.repeat == 0)
    {
        switch (e.key.keysym.sym)
        {
        case SDLK_UP:
            up = true;
            cout << "up" << endl;
            break;
        case SDLK_DOWN:
            down = true;
            cout << "down" << endl;

            break;
        case SDLK_LEFT:
            cout << "left" << endl;
            left = true;
            break;
        case SDLK_RIGHT:
            right = true;
            cout << "right" << endl;
            break;
        }
    }
    else if (e.type == SDL_KEYUP && e.key.repeat == 0)
    {
        switch (e.key.keysym.sym)
        {
        case SDLK_UP:
            up = false;
            break;
        case SDLK_DOWN:
            down = false;
            break;
        case SDLK_LEFT:
            left = false;

            break;
        case SDLK_RIGHT:
            right = false;
            break;
        }
    }
    if (right)
    {
        moverRect.x += 15;
    }
    if (left)
    {
        moverRect.x -= 15;
    }

    if (up)
    {
        moverRect.y -= 15;
    }
    if (down)
    {
        moverRect.y += 15;
    }
}

void Bird::collision()
{
    if (moverRect.y < 321)
    {
        moverRect.x += 5;
        moverRect.y -= 30;
    }
    else if (moverRect.y > 320)
    {
        moverRect.x += 5;
        moverRect.y += 30;
    }
}

SDL_Rect &Bird::posi()
{
    return moverRect;
}

SDL_Rect &Bird::pixels()
{
    return srcRect;
}

//move function is for the movement of Bird & to handle that it remains within the boundaries of screen
void Bird::move()
{

    if (moverRect.x <= 0)
    {
        moverRect.x = 0;
    }

    if (moverRect.x >= 1075)
    {
        moverRect.x = 1075;
    }

    if (moverRect.y < 0)
    {
        moverRect.y = 0;
    }

    if (moverRect.y > 690)
    {
        moverRect.y = 690;
    }
}