#include "texture_manager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texture, SDL_Renderer* ren) {
    SDL_Surface *surface = IMG_Load(texture);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, surface);
    SDL_FreeSurface(surface);

    return tex;
}