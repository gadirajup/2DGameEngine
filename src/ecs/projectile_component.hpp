#ifndef PROJECTILE_COMPONENT
#define PROJECTILE_COMPONENT

#include "ecs.hpp"
#include "components.hpp"
#include "../vector2d.hpp"

class ProjectileComponent: public Component {
private:
    TransformComponent* transform;
    int range = 0;
    int speed = 0;
    int distance = 0;
    Vector2D velocity;
    
public:
    ProjectileComponent(int rng, int sp, Vector2D vel) : range(rng), speed(sp), velocity(vel) {}
    ~ProjectileComponent() {}

    void init() override {
        transform = &entity->getComponent<TransformComponent>();
        transform->velocity = velocity;
    }

    void update() override {
        distance += speed;
        if (distance > range) {
            std::cout << "Out of Range" << std::endl;
            entity->destroy();
        } else if (transform->position.x > Game::camera.x + Game::camera.w ||
                   transform->position.x < Game::camera.x ||
                   transform->position.y > Game::camera.y + Game::camera.h ||
                   transform->position.y < Game::camera.y) {
                       std::cout << "Out of bounds!" << std::endl;
                       entity->destroy();
                   }
    }
};

#endif //  PROJECTILE_COMPONENT