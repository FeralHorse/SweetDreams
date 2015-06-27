#include <iostream>
#include <SDL2/SDL.h> //May change depending on comp
#include <SDL2_image/SDL_image.h>//May change depending on comp
#include <string>

using namespace std;

int main() {
    
    GameMode gameMode;
    gameMode.GameLoop();
    
    //Random Outro
    cout << "Feral Horse!\n";
    cout << "Founded by Brandon Lanchang, Adam Hoinkis, and James Livecchi";
    return 0;
}
