#include "game.hpp"
#include "timer.hpp"

#define FPS 60

Game *game = nullptr;

int main() {

    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game();
    game->init("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    Timer timer;

    int countedFrames = 0;
    timer.start();

    while (game->running()) {
        countedFrames++;
        float avgFPS = countedFrames / (timer.getTicks() / 1000.f);
        if (avgFPS > 2000000000) { avgFPS = 0; }
        std::cout << avgFPS << std::endl;

        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if(frameDelay > frameTime) {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    game->clean();
}