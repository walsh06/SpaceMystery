#include "Clue.h"

Clue::Clue(string *description)
{
    this->description = description;
}

string* Clue::getDescription()
{
    return description;
}

bool Clue::isFound()
{
    return found;
}


