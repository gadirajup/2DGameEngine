#ifndef SPRITE_COMPONENT_HPP
#define SPRITE_COMPONENT_HPP

#include "components.hpp"
#include "SDL.h"

class SpriteComponent: public Component {
public:
    SpriteComponent() = default;
    SpriteComponent(const char* path) {
        setTex(path);
    }

    void init() override {
        position = &entity->getComponent<PositionComponent>();

        srcRect.x = srcRect.y = 0;
        srcRect.w = srcRect.h = 32;
        destRect.w = destRect.h = 64;
    }

    void update() override {
        destRect.x = position->x();
        destRect.y = position->y();
    }

    void draw() override {
        TextureManager::Draw(texture, srcRect, destRect);
    }

    void setTex(const char* path) {
        texture = TextureManager::LoadTexture(path);
    }

private:
    PositionComponent *position;
    SDL_Texture *texture;
    SDL_Rect srcRect, destRect;
};

#endif // SPRITE_COMPONENT_HPP