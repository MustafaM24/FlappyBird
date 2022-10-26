#include <SDL.h>
#include <iostream>
#pragma once
using namespace std;

//This class handles the drawing functions & is also inherited by most of the other classes.
class Unit
{
protected:
    SDL_Rect srcRect, moverRect;

public:
    void draw(SDL_Renderer *, SDL_Texture *assets);
};
