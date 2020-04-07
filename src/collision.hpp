#ifndef COLLISION_HPP
#define COLLISION_HPP

#include "SDL/SDL.h"

class Collision {
public: 
    static bool AABB(const SDL_Rect& rectA, const SDL_Rect& rectB);
};

#endif // COLLISION_HPP