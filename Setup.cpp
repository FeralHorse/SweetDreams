#include "Setup.h"

//Constructor
Setup::Setup(void) {
    gameMode = true;
    window = SDL_CreateWindow( "SDL Tutorial", 100, 100, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    
    //Error check
    if (window == NULL) {
        cout << "Error: Could not create window";
        return 0;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

//Deconstructor
Setup::~Setup(void) {
    
}
