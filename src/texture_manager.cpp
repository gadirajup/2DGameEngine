#include "texture_manager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texture) {
    SDL_Surface *surface = IMG_Load(texture);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(Game::renderer, surface);
    SDL_FreeSurface(surface);

    return tex;
}

void TextureManager::Draw(SDL_Texture* text, SDL_Rect src, SDL_Rect dest) {
    SDL_RenderCopy(Game::renderer, text, &src, &dest);
}