#include <SDL.h>
#include <iostream>
#include "unit.hpp"
#include <list>
#pragma once
using namespace std;

//We have two classes for our pipes that show up on the screen
class Pipe2 : public Unit
{
    int pipe;
    int countP = 0;

public:
    void location();
    void draw(SDL_Renderer *, SDL_Texture *assets);
    Pipe2(int, int);
    Pipe2();
    SDL_Rect posi();
};
