#include <SDL.h>
#include "unit.hpp"
#pragma once

// This class defines the FlappyBird object, inherited from Unit

class Bird : public Unit
{
private:
    //Handle the position of Bird & its constant movement
    int counth = 0;
    int bb;
    int xpos;
    int ypos;
    int x_velocity;
    int y_velocity;
    bool left = false;
    bool right = false;
    bool up = false;
    bool down = false;

public:
    void handleEvent(SDL_Event &e);
    void move();
    void collision();

    void birdfly();

    void draw(SDL_Renderer *, SDL_Texture *assets);
    Bird();
    SDL_Rect &pixels();
    SDL_Rect &posi();
    ~Bird();
};