#include "player.h"

Player::Player()
{
    oxygen = 100;
}

Player::getClues()
{
    return clues;
}

Player::resupplyOxygen()
{
    oxygen = 10;
}

Player::loseOxygen()
{
    oxygen--;
}

Player::getOxygen()
{
    return oxygen;
}

Player::addClue(Clue *c)
{
   clues.push_back(*c);
}
