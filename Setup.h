#pragma once //Goes through this code once

class Setup {
   
public:
    Setup(void);
    ~Setup(void);
    
//Declarations, private for security
private:
    bool gameMode;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event* mainEvent;
}
