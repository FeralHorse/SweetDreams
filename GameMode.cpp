#include "GameMode.h"
#include "stdafx.h"


//Constructor
GameMode::GameMode(void) {
    gameMode = true;
    background = new images(setup.renderGet(), "background", 0, 0, 600, 400);
}

//Deconstructor
GameMode::~GameMode(void) {
    
}

//Loop where game occurs
void GameMode::GameLoop(void) {
    //While you are in game mode and havn't pressed the x button in the corner of the screen
    while (gameMode && setup.eventGet()->type != SDL_QUIT) {
        setup.begin();
        background->draw();
        SDL_RenderPresent(setup.renderGet());
    }
}
