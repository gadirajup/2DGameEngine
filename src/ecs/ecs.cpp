#include "ecs.hpp"

void Entity::addGroup(Group group) {
    groupBitset[group] = true;
    manager.AddToGroup(this, group);
}