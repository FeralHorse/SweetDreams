#include "Setup.h"
#include "stdafx.h"


//Constructor, creates window and means of updating it
Setup::Setup(void) {
    window = SDL_CreateWindow( "Sweet Dreams", 100, 100, 600, 400, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    check = new SDL_Event();
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

//Deconstructor
Setup::~Setup(void) {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    delete check;
}

//Updates window at beginning
void Setup:: begin(void) {
    SDL_PollEvent(check);
    SDL_RenderClear(renderer);
}

//Function to get renderer
SDL_Renderer* Setup::renderGet(void) {
    return renderer;
}

//Function to get event
SDL_Event* Setup::eventGet(void) {
    return check;
}
