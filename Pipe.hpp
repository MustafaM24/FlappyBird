#include <SDL.h>
#include <iostream>
#include <vector>
#include "unit.hpp"
#pragma once
using namespace std;

class Pipe : public Unit
{
    int countP = 0;
    int pipe;

public:
    void location();

    void draw(SDL_Renderer *, SDL_Texture *assets);

    Pipe(int, int);
    Pipe();
    ~Pipe();
    SDL_Rect posi();
};
