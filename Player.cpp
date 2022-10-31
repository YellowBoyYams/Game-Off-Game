#include "Player.h"
#include <iostream>

Player::Player(Texture2D texture): playerTexture(texture){
    
}

void Player::Update(){
    if(IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))   std::cout << "Hello World!" << std::endl;
    if(IsKeyDown(KEY_D) || IsKeyDown(KEY_DOWN))   y += 2.0f;
    if(IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))   x -= 2.0f;
    if(IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))   x += 2.0f;


}

void Player::Draw(){
    frameHeight = (float)(playerTexture.height / 2);
    timer = timer + GetFrameTime();
    maxFrames = (int)(playerTexture.height / (int)frameHeight);
    if(timer >= 0.2f){
        timer = 0.0f;
        frame += 1;
    }

    frame = frame % maxFrames;
    std::cout << frame << std::endl;
    DrawTextureRec(playerTexture,
    Rectangle{0, (frameHeight * frame), (float)playerTexture.width, frameHeight}, 
    Vector2{x, y}, 
    WHITE);
}