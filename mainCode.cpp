#include "stdafx.h"
#include "GameMode.h"
#include <string>

using namespace std;

int main() {
    
    GameMode gameMode;
    gameMode.GameLoop();
    
    //Random Outro
    cout << "Feral Horse!\n";
    cout << "Founded by Brandon Lanchang, Adam Hoinkis, James Livecchi, Matthew Brandon";
    return 0;
}
