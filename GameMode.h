#pragma once //Goes through code once
#include "Setup.h"
#include "images.h"

class GameMode {
    

public:
    GameMode(void); //Constructor
    ~GameMode(void); //Deconstructor
    void GameLoop(void); //Funtion that serves as the start of game
    
//Declarations, private for security
private:
    bool gameMode;
    Setup setup;
    images background;
};
