#pragma once

class Game {
public:
    void roll(int pins);
    int score();

private:
    bool isStrike(int rollIndex) const;
    bool isSpare(int rollIndex) const;

    int rolls[21]{};
    int currentRoll = 0;
};
