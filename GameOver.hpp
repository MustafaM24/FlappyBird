#include <SDL.h>
#include <iostream>
#include <list>
#include "unit.hpp"
using namespace std;

class GameOver : public Unit
{
public:
    void draw(SDL_Renderer *, SDL_Texture *assets);
    GameOver();
    SDL_Rect posi();
    ~GameOver();
};