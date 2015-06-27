#include "GameMode.h"

//Constructor
GameMode::GameMode(void) {
    gameMode = true;
}

//Deconstructor
GameMode::~GameMode(void) {
    
}

void GameMode::GameLoop() {
    while (gameMode && Setup.event.get()->type != SDL_QUIT) {
        SDL_PollEvent(Setup.eventGet());
        SDL_RenderClear(Setup.renderGet());
        SDL_RenderPresent(Setup.renderGet());
    }
}
