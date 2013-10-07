#include "room.h"

Room::Room()
{
    person = new Person();
}

Room::getPerson()
{
    return person;
}

Room::addClue(Clue *c)
{
    clues.push_back(*c);
}
