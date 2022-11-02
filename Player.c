#include "Player.h"

Texture2D texture;

void PlayerLoad(const char* fileName){
    texture = LoadTexture(fileName);
}

float timer = 0.0f;
int frame = 0;

int x = 0;
int y = 0;

void PlayerUpdate(){
    if(IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_H)){
        x -= 2;
    }

    if(IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_L)){
        x += 2;
    }

    if(IsKeyDown(KEY_W) || IsKeyDown(KEY_UP) || IsKeyDown(KEY_K)){
        y -= 2;
    }

    if(IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_J)){
        y += 2;
    }

}

void PlayerDraw(){

    //----Vars----
    float frameHeight = (float)(texture.height / 2);
    int maxFrames = (int)(texture.height / (int)frameHeight);
    Rectangle rec = {0, frameHeight * frame, (float)texture.width, frameHeight};
    Vector2 pos = {x, y};
    
    timer += GetFrameTime();

    if(timer >= 0.2f){
        timer = 0.0f;
        frame += 1;
    }

    frame = frame % maxFrames;

    DrawTextureRec(
        texture, 
        rec,
        pos,
        RAYWHITE);
}