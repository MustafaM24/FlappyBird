#include <SDL.h>
#include <iostream>
#include <list>
using namespace std;

//This class detects the collission between our bird and pipes

class Collission : public Unit
{
public:
    void draw(SDL_Renderer *, SDL_Texture *assets);
    Collission(int, int);
    Collission();
    SDL_Rect posi();
    ~Collission();
};