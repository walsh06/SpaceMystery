#include "Room.h"

Room::Room(string* roomDescription)
{
    description = roomDescription;
}

Room::Room(string* roomDescription, Person *p)
{
    person = p;
    description = roomDescription;
}

Person* Room::getPerson()
{
    return person;
}

string* Room::getDescription()
{
    return description;
}

void Room::getFullDescription()
{
    cout << *description << endl;
    cout << *person->getName() << endl;
    cout<< "Room Clues: " ;
    for(int i = 0; i < clues.size(); i++)
    {
        cout << *clues[i].getDescription() << " ";
    }
    cout << endl;
}

void Room::addClue(Clue *c)
{
    clues.push_back(*c);
}

int Room::numberOfClues() {
    return clues.size();
}

Clue* Room::getClue(int pos)
{
    Clue *c = &clues[pos];
    return c;
}

map<string, Room *> Room::getExits()
{
    return exits;
}

void Room::setExits(Room *exit1, Room *exit2, Room *exit3, Room *exit4) {
    if (exit1 != NULL)
        exits[*exit1->getDescription()] = exit1;
    if (exit2 != NULL)
        exits[*exit2->getDescription()] = exit2;
    if (exit3 != NULL)
        exits[*exit3->getDescription()] = exit3;
    if (exit4 != NULL)
        exits[*exit4->getDescription()] = exit4;
}
