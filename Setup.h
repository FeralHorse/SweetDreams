#pragma once //Goes through this code once

class Setup {
   
public:
    Setup(void);
    ~Setup(void);
    SDL_Renderer* renderGet(void);
    SDL_Event* eventGet(void);
    
//Declarations, private for security
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event* check;
}
