#include "stdafx.h"
#include "GameMode.h"
#include <string>

using namespace std;

int main() {
    
    //Start of game
    GameMode gameMode;
    gameMode.GameLoop();
    
    delete gameMode;
    
    //Random Outro
    cout << "Feral Horse!\n";
    cout << "Founded by Brandon Lanchang, Adam Hoinkis, James Livecchi, Matthew Brandon";
    return 0;
}
