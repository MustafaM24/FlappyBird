#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "GameLoop.hpp"
#pragma once

#include <list>

//sets up everything required for the game
using namespace std;

class Game
{
    //Defining the screen dimensions
    const int SCREEN_WIDTH = 1000;
    const int SCREEN_HEIGHT = 768;

    //Renderer and Texture to create the screen
    SDL_Window *gWindow = NULL;
    SDL_Renderer *gRenderer = NULL;
    SDL_Texture *gTexture = NULL;

    SDL_Texture *assets = NULL;
    Mix_Music *bgMusic = NULL;
    Mix_Chunk *CrashMusic = NULL;
    Mix_Chunk *BulletMusic = NULL;
    Mix_Chunk *LifeSound = NULL;

    SDL_Event e;
    SDL_Rect boomRect;
    SDL_Rect BoommoverRect;
    SDL_Rect gameOverRect;
    SDL_Rect gameOvermoverRect;

    int scrollingOffset = 0;
    bool intersected = false;
    bool interscBarier = false;
    int Crasher = 0;
    int Crashloop = 0;
    int m_width;
    int m_height;
    bool check = false;
    bool quit = true;
    Bird *dot = new Bird();
    angrybird *AngryBirds = new angrybird();

public:
    bool init();
    bool loadMedia();
    void close();
    SDL_Texture *loadTexture(std::string path);
    void run();
};
