#include <SDL.h>
#pragma once
#include <iostream>
#include "unit.hpp"
using namespace std;

//Bullet that is generated from the Angry bird and can reduce life of flappybird when it hits it
class Bullet : public Unit
{
    int xpos;
    int ypos;
    int x_velocity;
    int y_velocity;

public:
    void mover();
    int getmoverx();
    int getmovery();
    SDL_Rect posi();

    void draw(SDL_Renderer *, SDL_Texture *assets);
    Bullet();
    Bullet(int, int);
    ~Bullet();
};