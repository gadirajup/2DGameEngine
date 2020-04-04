#ifndef POSITION_COMPONENT_HPP
#define POSITION_COMPONENT_HPP

#include "components.hpp"

class PositionComponent: public Component {
public:
    PositionComponent() {
        xpos = 0;
        ypos = 0;
    }

    PositionComponent(int x, int y) {
        xpos = x;
        ypos = y;
    }

    int x() { return xpos; }
    int y() { return ypos; }

    void init() override {
        xpos = 0;
        ypos = 0;
    }

    void update() override {
        xpos++;
        ypos++;
    }

    void setPos(int x, int y) {
        xpos = x;
        ypos = y;
    }

private:
    int xpos;
    int ypos;
};

#endif // POSITION_COMPONENT_HPP