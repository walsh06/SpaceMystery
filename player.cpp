#include "player.h"

Player::Player()
{

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
