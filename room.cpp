#include "room.h"

Room::Room(Person *p)
{
    person = p;
}

Room::getPerson()
{
    return person;
}

Room::addClue(Clue *c)
{
    clues.push_back(*c);
}

int Room::numberOfClues() {
    return clues.size();
}
