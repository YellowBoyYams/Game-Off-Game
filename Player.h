#include "raylib.h"

class Player{
    public:
        Player(Texture2D texture);
        void Update();
        void Draw();
    private:
        float x;
        float y;
        Texture2D playerTexture;
        float frameHeight;
        int frame = 0;
        inline static float timer = 0;
        int maxFrames;
};