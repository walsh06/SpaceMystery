#include "Room.h"


Room::Room(Person *p)
{
    person = p;
    description = new string("roomDescription");
}

Person* Room::getPerson()
{
    return person;
}

void Room::addClue(Clue *c)
{
    clues->push_back(*c);
}

int Room::numberOfClues() {
    return clues->size();
}
