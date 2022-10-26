#include "bullet.hpp"
#include <iostream>

using namespace std;

void Bullet::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    srcRect = {622, 207, 302, 96};
    Unit::draw(gRenderer, assets);
    moverRect.x += 7;
}

//Constructor
Bullet::Bullet()
{
    xpos = 4;
    x_velocity = 0;
    ypos = 4;
    y_velocity = 0;
    moverRect = {80, 320, 40, 24};
}

int Bullet::getmoverx()
{
    return moverRect.x;
}

SDL_Rect Bullet::posi()
{
    return moverRect;
}

int Bullet::getmovery()
{
    return moverRect.y;
}

Bullet::Bullet(int x, int y)
{
    xpos = 4;
    x_velocity = 0;
    ypos = 4;
    y_velocity = 0;
    moverRect = {x + 80, y + 20, 40, 24};
}

void Bullet::mover()
{
    moverRect.x += 1;
}
Bullet::~Bullet()
{
}
