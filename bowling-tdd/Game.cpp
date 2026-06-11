#include "Game.h"

void Game::roll(int pins) {
    rolls[currentRoll++] = pins;
}

int Game::score() {
    int total = 0;
    int rollIndex = 0;
    for (int frame = 0; frame < 10; frame++) {
        if (rolls[rollIndex] + rolls[rollIndex + 1] == 10) { // spare
            total += 10 + rolls[rollIndex + 2];
            rollIndex += 2;
        } else {
            total += rolls[rollIndex] + rolls[rollIndex + 1];
            rollIndex += 2;
        }
    }
    return total;
}
