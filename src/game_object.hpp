#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include "game.hpp"

class GameObject {
public:
    GameObject(const char* texturesheet, int x, int y);
    ~GameObject();

    void update();
    void render();

private:
    int xpos;
    int ypos;

    SDL_Texture* objTexture;
    SDL_Rect srcRect, destRect;
};

#endif // GAME_OBJECT_HPP