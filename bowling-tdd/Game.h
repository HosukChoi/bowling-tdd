#pragma once

class Game {
public:
    void roll(int pins);
    int score();

private:
    int rolls[21]{};
    int currentRoll = 0;
};
