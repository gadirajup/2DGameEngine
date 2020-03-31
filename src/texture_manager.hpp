#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include "game.hpp"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* ren);
};

#endif // TEXTURE_MANAGER_HPP