#include "GameMode.h"
#include "stdafx.h"


//Constructor
GameMode::GameMode(void) {
    gameMode = true;
}

//Deconstructor
GameMode::~GameMode(void) {
    
}

void GameMode::GameLoop(void) {
    while (gameMode && setup.eventGet()->type != SDL_QUIT) {
        SDL_PollEvent(setup.eventGet());
        SDL_RenderClear(setup.renderGet());
        SDL_RenderPresent(setup.renderGet());
    }
}
