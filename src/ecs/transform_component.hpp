#ifndef TRANSFORM_COMPONENT_HPP
#define TRANSFORM_COMPONENT_HPP

#include "components.hpp"
#include "../vector2d.hpp"

class TransformComponent: public Component {
public:

    Vector2D position;

    TransformComponent() {
        position.x = 0.0f;
        position.y = 0.0f;
    }

    TransformComponent(float x, float y) {
        position.x = x;
        position.y = y;
    }

    void update() override {
        
    }
};

#endif // TRANSFORM_COMPONENT_HPP