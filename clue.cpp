#include "clue.h"

Clue::Clue(string description)
{
    this->description = description;
}

Clue::getDescription()
{
    return description;
}

Clue::isFound()
{
    return found;
}

Clue::isValidClue()
{
    return valid;
}

