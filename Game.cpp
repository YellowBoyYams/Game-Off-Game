#include "Game.h"
#include "raylib.h"
#include <assert.h>
Game::Game(int width, int height, int fps, std::string title){
    assert(!GetWindowHandle()); //If the assertion is triggered the window is already open
    SetTargetFPS(fps);
    InitWindow(width, height, title.c_str());
    playText= LoadTexture("New Piskel.png");
    Player player(playText);
}



void Game::Tick(){
    BeginDrawing();
    Draw();
    Update();
    EndDrawing();
}

float timer = 0.0f;
int frame = 0;

void Game::Draw(){
    ClearBackground(WHITE);
    player.Draw();

}

void Game::Update(){
    player.Update();
}
Game::~Game() noexcept{
    assert(GetWindowHandle()); //If assertion is triggered the window already closed
    CloseWindow();
}


bool Game::GameShouldClose() const{
    return WindowShouldClose();
}