#include "Game.h"

void Game::roll(int pins) {
    rolls[currentRoll++] = pins;
}

int Game::score() {
    int total = 0;
    for (int i = 0; i < 20; i++) {
        total += rolls[i];
    }
    return total;
}
