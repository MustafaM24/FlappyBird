#include "game.hpp"

// Start & Closes the game, or give errors where it fails to Initialise

int main(int argc, char *argv[])
{
    Game game;
    srand(time(0));
    if (!game.init())
    {
        printf("Failed to initialize!\n");
        return 0;
    }
    if (!game.loadMedia())
    {
        printf("Failed to load media!\n");
        return 0;
    }

    game.run();
    game.close();

    return 0;
}