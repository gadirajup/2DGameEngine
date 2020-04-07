#ifndef TRANSFORM_COMPONENT_HPP
#define TRANSFORM_COMPONENT_HPP

#include "components.hpp"
#include "../vector2d.hpp"

class TransformComponent: public Component {
public:

    Vector2D position;
    Vector2D velocity;

    int height = 32;
    int width = 32;
    int scale = 1;

    int speed = 3;

    TransformComponent() {
        position.Zero();
    }

    TransformComponent(int sc) {
        position.Zero();
        scale = sc;
    }

    TransformComponent(float x, float y) {
        position.x = x;
        position.y = y;
    }

    TransformComponent(float x, float y, int h, int w, int sc) {
        position.x = x;
        position.y = y;
        height = h;
        width = w;
        scale = sc;
    }

    void init() override  {
        velocity.x = 0;
        velocity.y = 0;
    }

    void update() override {
        position.x += velocity.x * speed;
        position.y += velocity.y * speed;    
    }
};

#endif // TRANSFORM_COMPONENT_HPP