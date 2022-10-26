#include <SDL.h>
#include "unit.hpp"
#pragma once

// Keeps track of the Lives as everytime the Redbird shoots our flappy, the Life decreases.
class Lives : public Unit
{
    int position = 0;
    int xpos;
    int ypos;
    int x_velocity;
    int y_velocity;

public:
    void mover();
    void draw(SDL_Renderer *, SDL_Texture *assets);
    Lives(int);
    ~Lives();
};