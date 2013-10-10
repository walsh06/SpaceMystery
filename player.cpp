#include "Player.h"

Player::Player()
{
    oxygen = 100;
}

vector<Clue> Player::getClues()
{
    return clues;
}

void Player::resupplyOxygen()
{
    oxygen = 10;
}

void Player::loseOxygen()
{
    oxygen--;
}

int Player::getOxygen()
{
    return oxygen;
}

void Player::addClue(Clue *c)
{
   clues.push_back(*c);
}
