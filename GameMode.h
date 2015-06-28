#pragma once //Goes through code once
#include "Setup.h"

class GameMode {
    
//Functions
public:
    GameMode(void); //Constructor
    ~GameMode(void); //Deconstructor
    void GameLoop(void); //Funtion that serves as the start of game
    
//Declarations, private for security
private:
    bool gameMode;
    Setup setup;
};
