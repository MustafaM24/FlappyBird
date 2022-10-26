#include "GameLoop.hpp"
#include <iostream>

void GameLoop::drawObjects()
{

    for (list<Pipe *>::iterator k = pipe1.begin(); k != pipe1.end(); k++)
    {

        (*k)->draw(gRenderer, assets);
    }

    for (list<Pipe2 *>::iterator i = pipe2.begin(); i != pipe2.end(); i++)
    {

        (*i)->draw(gRenderer, assets);
    }

    for (list<Bullet *>::iterator x = shoot.begin(); x != shoot.end(); x++)
    {
        (*x)->draw(gRenderer, assets);
        if ((*x)->getmoverx() > 1300)
        {
            delete (*x);
            x = shoot.erase(x);
        }
    }

    for (list<Lives *>::iterator s = lifetrack.begin(); s != lifetrack.end(); s++)
    {

        (*s)->draw(gRenderer, assets);
    }

    if (!collide.empty())
    {
        collide.back()->draw(gRenderer, assets);
    }

    if (!gameEnd.empty())
    {
        gameEnd.back()->draw(gRenderer, assets);
    }
}

void GameLoop::createObject(int x, int y, char p)
{
    collide.push_back(new Collission(x, y));
    gameEnd.push_back(new GameOver());
}

int GameLoop::createObject(int x, int y)
{
    if (y % 50 == 0)
    {
        shoot.push_back(new Bullet(x, y));
        return 1;
    }
    else
    {
        return 0;
    }
}

void GameLoop::createObject()
{
    pipe1.push_back(new Pipe(1200, (rand() % 600)));
    pipe1.push_back(new Pipe(900, (rand() % 600)));

    pipe2.push_back(new Pipe2(700, (rand() % 600)));
    pipe2.push_back(new Pipe2(500, (rand() % 600)));
    pipe2.push_back(new Pipe2(1050, (rand() % 600)));

    lifetrack.push_back(new Lives(1));
    lifetrack.push_back(new Lives(2));
    lifetrack.push_back(new Lives(3));
    lifetrack.push_back(new Lives(4));
    lifetrack.push_back(new Lives(5));
}

void GameLoop::deleteALL()
{

    for (auto i = lifetrack.begin(); i != lifetrack.end(); i++)
    {
        delete lifetrack.back();
        lifetrack.pop_back();
    }
    lifetrack.clear();

    for (auto i = pipe1.begin(); i != pipe1.end(); i++)
    {
        delete pipe1.back();
        pipe1.pop_back();
    }
    pipe1.clear();

    for (auto i = pipe2.begin(); i != pipe2.end(); i++)
    {
        delete pipe2.back();
        pipe2.pop_back();
    }
    pipe2.clear();

    for (auto i = shoot.begin(); i != shoot.end(); i++)
    {
        delete shoot.back();
        shoot.pop_back();
    }
    shoot.clear();

    for (auto i = collide.begin(); i != collide.end(); i++)
    {
        delete collide.back();
        collide.pop_back();
    }
    collide.clear();
}

GameLoop::GameLoop(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst)
{
}
