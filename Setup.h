#pragma once //Goes through this code once
#include "stdafx.h"

class Setup {
    
public:
    Setup(void); //Constructor
    ~Setup(void); //Deconstructor
    void begin(void); //Function that begins the game window
    SDL_Renderer* renderGet(void); //Function to get renderer
    SDL_Event* eventGet(void); //Function to get event
    
//Declarations, private for security
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event* check;
};
