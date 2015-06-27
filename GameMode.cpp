#include "GameMode.h"

//Constructor
GameMode::GameMode(void) {
    
}

//Deconstructor
GameMode::~GameMode(void) {
    
}

void GameMode::GameLoop(void) {
    while (gameMode && check->type != SDL_QUIT) {
        SDL_PollEvent(Setup.checkGet());
        SDL_RenderClear(Setup.renderGet());
        SDL_RenderPresent(Setup.renderGet());
    }
}
