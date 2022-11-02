#include "Game.h"
#include "raylib.h"
#include "Player.h"

#define bgColor   CLITERAL(Color){139,172,15}


void Init(int screenWidth, int screenHeight, int fps, const char* title){
    InitWindow(screenWidth, screenHeight, title);
    SetTargetFPS(fps);
    PlayerLoad("./assets/New Piskel.png");
}

void Tick(){
    while(!WindowShouldClose()){
        Update();
        Draw();
    }
}

void Draw(){
    BeginDrawing();
        ClearBackground(bgColor);
        PlayerDraw();
    EndDrawing();
}

void Update(){
    PlayerUpdate();
}