#include <iostream>
#include <SDL2/SDL.h> //May change depending on comp
#include <SDL2_image/SDL_image.h>//May change depending on comp
#include <string>

using namespace std;

const int ScreenWidth = 800; //subject to change
const int ScreenHeight = 600; //subject to change

int main() {
    
    //Intiating game window
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = NULL;
    window = SDL_CreateWindow( "SDL Tutorial", 100, 100, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    bool gameMode = true;
    
    //Error check
    if (window == NULL) {
        cout << "Error: Could not create window";
        return 0;
    }
    
    //Renderer and event to update window
    SDL_Renderer* renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Event* update = new SDL_Event();
    
    //Game Mode
    while (gameMode && update->type != SDL_QUIT) {
        SDL_PollEvent(update);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    
    //Clearing memory
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    delete update;
    
    //Random Outro
    cout << "Feral Horse!\n";
    cout << "Founded by Brandon Lanchang, Adam Hoinkis, and James Livecchi";
    return 0;
}
