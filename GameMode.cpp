#include "GameMode.h"
#include <SDL2/SDL.h> //May change depending on comp
#include <SDL2_image/SDL_image.h>//May change depending on comp


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
