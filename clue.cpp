#include "Clue.h"

Clue::Clue(string *description)
{
    this->description = description;
    found = false;
}

string* Clue::getDescription()
{
    return description;
}

bool Clue::isFound()
{
    return found;
}





