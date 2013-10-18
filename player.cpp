#include "Player.h"
#include <iostream>

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

vector<Clue *> Player::getClues()
{
    return clues;
}

void Player::addClue(Clue *c)
{
   clues.push_back(c);
}

Clue* Player::getClue(int pos)
{
    return clues[pos];
}

void Player::printClues()
{
    cout<< "Player Clues: " ;
    for(int i = 0; i < clues.size(); i++)
    {
        cout << *clues[i]->getDescription() << " ";
    }
    cout << endl;
}

void Player::addSuspect(Person *p)
{
     suspects.push_back(*p);
}

vector<Person> Player::getSuspects()
{
    return suspects;
}



