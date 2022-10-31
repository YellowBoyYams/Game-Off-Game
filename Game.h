#pragma once
#include <string>
#include "Player.h"

class Game{

    public:
        Game(int width, int height, int fps, std::string title);
        Game(const Game& other) = delete;
        Game& operator=(const Game& other) = delete;
        ~Game() noexcept;
        
        bool GameShouldClose() const;
        void Init();
        void Tick();

    private:
        void Draw();
        void Update();
        Texture2D playText;
        Player uhm;
        
};