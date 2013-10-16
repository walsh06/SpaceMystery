#include "Player.h"

Player::Player()
{
    oxygen = 100;
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

vector<Clue> Player::getClues()
{
    return clues;
}

void Player::addClue(Clue *c)
{
   clues.push_back(*c);
}

Clue Player::getClue(int pos)
{
    return clues[pos];
}


