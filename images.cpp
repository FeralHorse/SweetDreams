#include "images.h"
#include "stdafx.h"


//Constructor
images::images(SDL_Renderer* inputRend, std:: string file, int x, int y, int w, int h) {
    renderer = inputRend;
    subject = NULL;
    subject = IMG_LoadTexture(renderer, file.c_str());
    subjectRect.x = x;
    subjectRect.y = y;
    subjectRect.w = w;
    subjectRect.h = h;
}

//Deconstructor
images::~images(void) {
    SDL_DestroyTexture(subject);
    SDL_DestroyRenderer(renderer);
}

//Function to display character
void images::draw(void) {
    SDL_RenderCopy(renderer, subject, NULL, &subjectRect);
}

