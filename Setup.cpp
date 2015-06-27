#include "Setup.h"

//Constructor
Setup::Setup(void) {
    gameMode = true;
    window = SDL_CreateWindow( "SDL Tutorial", 100, 100, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    check = new SDL_Event();
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    //Error check
    if (window == NULL) {
        cout << "Error: Could not create window";
        return 0;
    }
}

//Deconstructor
Setup::~Setup(void) {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    delete check;
}
