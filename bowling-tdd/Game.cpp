#include "Game.h"

void Game::roll(int pins) {
    rolls[currentRoll++] = pins;
}

bool Game::isStrike(int rollIndex) const {
    return rolls[rollIndex] == 10;
}

bool Game::isSpare(int rollIndex) const {
    return rolls[rollIndex] + rolls[rollIndex + 1] == 10;
}

int Game::score() {
    int total = 0;
    int rollIndex = 0;
    for (int frame = 0; frame < 10; frame++) {
        if (isStrike(rollIndex)) {
            total += 10 + rolls[rollIndex + 1] + rolls[rollIndex + 2];
            rollIndex += 1;
        } else if (isSpare(rollIndex)) {
            total += 10 + rolls[rollIndex + 2];
            rollIndex += 2;
        } else {
            total += rolls[rollIndex] + rolls[rollIndex + 1];
            rollIndex += 2;
        }
    }
    return total;
}
