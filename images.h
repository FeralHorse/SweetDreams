#pragma once //Goes through this code once
#include "stdafx.h"

class images {
    
public:
    images(SDL_Renderer* renderer, std:: string file, int x, int y, int w, int h); //Constructor
    ~images(void); //Deconstructor
    void draw(void);
    
    //Declarations, private for security
private:
    SDL_Texture* player;
    SDL_Rect playerRect;
    SDL_Renderer* renderer;
};
