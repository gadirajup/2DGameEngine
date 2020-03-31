#include "texture_manager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texture) {
    SDL_Surface *surface = IMG_Load(texture);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(Game::renderer, surface);
    SDL_FreeSurface(surface);

    return tex;
}