#include "Game.h"

void Game::roll(int pins) {
    rolls[currentRoll++] = pins;
}

int Game::score() {
    return 0;
}
