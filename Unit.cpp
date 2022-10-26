#include "Unit.hpp"
#include <iostream>
using namespace std;

void Unit::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}
