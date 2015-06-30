#include "GameMode.h"
#include "stdafx.h"


//Constructor
GameMode::GameMode(void) {
    gameMode = true;
}

//Deconstructor
GameMode::~GameMode(void) {
    
}

//Loop where game occurs
void GameMode::GameLoop(void) {
    //While you are in game mode and havn't pressed the x button in the corner of the screen
    while (gameMode && setup.eventGet()->type != SDL_QUIT) {
        setup.begin();
        SDL_RenderPresent(setup.renderGet());
    }
}
