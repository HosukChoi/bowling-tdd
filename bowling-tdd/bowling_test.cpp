#include <gtest/gtest.h>
#include "Game.h"

class BowlingGameTest : public ::testing::Test {
protected:
    Game game;
};

TEST_F(BowlingGameTest, GutterGame) {
    for (int i = 0; i < 20; i++) {
        game.roll(0);
    }
    EXPECT_EQ(0, game.score());
}

TEST_F(BowlingGameTest, AllOnes) {
    for (int i = 0; i < 20; i++) {
        game.roll(1);
    }
    EXPECT_EQ(20, game.score());
}
