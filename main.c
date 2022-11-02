#include "raylib.h"
#include "Game.h"

//Theme: Cli-ché
//What I will Do: "a blast from the past"

//Should be an old gameboy type game


int main(void){
    const int screenWidth = 600;
    const int screenHeight = 600;

    Init(screenWidth, screenHeight, 60, "Game");
    Tick();
    
    CloseWindow();
    return 0;
}