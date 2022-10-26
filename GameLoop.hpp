#include <SDL.h>
#include <list>
#include "Bird.hpp"
#include "Pipe.hpp"
#include "AngryBird.hpp"
#include "Pipe2.hpp"
#include <vector>
#include "Lives.hpp"
#include "Collission.hpp"
#include "GameOver.hpp"

using namespace std;

//This GameLoop class creates vector for our objects and also handles
//the main drawing of these objects from the assets file.
// Sets up the whole screen

class GameLoop
{
protected:
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

public:
    list<Pipe2 *> pipe2;
    list<Pipe *> pipe1;
    list<Collission *> collide;
    list<GameOver *> gameEnd;
    list<Bullet *> shoot;
    list<Lives *> lifetrack;
    GameLoop(SDL_Renderer *, SDL_Texture *);
    void drawObjects();
    void createObject(int, int, char);
    int createObject(int, int);
    void createObject();
    void deleteALL();
};