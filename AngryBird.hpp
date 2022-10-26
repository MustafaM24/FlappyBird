#include <SDL.h>
#include "bullet.hpp"
#include "unit.hpp"
#pragma once

//This class angrybird draws a angrybird on one side of the screen that shoots bullet at the bird
class angrybird : public Unit
{
    int position = 0;
    //The angrybird's x,y position and velocities
    int xpos;
    int ypos;
    int x_velocity;
    int y_velocity;

public:
    void draw(SDL_Renderer *, SDL_Texture *assets);
    angrybird();
    ~angrybird();

    void mover();
    int getmoverx();
    int getmovery();
};