#include "Game.h"
#include "raylib.h"
//THEME: Vampires
//LIMATATION: Blood is Leathal

int main(void){

    const int screenWidth = 800;
    const int screenHeight = 600;
    
    Game game(screenWidth, screenHeight, 60, "Vampires");

    while(!game.GameShouldClose()){
        game.Tick();
    }

    return 0;

}