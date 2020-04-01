#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include "game.hpp"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* filename);
    static void Draw(SDL_Texture* text, SDL_Rect src, SDL_Rect dest);
};

#endif // TEXTURE_MANAGER_HPP