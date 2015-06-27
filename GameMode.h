#pragma once
#include "Setup.h"

class GameMode {
    
    //Functions
public:
    GameMode(void);
    ~GameMode(void);
    void GameLoop(void);
    
    //Declarations
private:
    bool gameMode;
    Setup setup;
};
