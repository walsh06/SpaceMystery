#include "victim.h"
#include "clue.h"

Victim::Victim(string description)
{
    this->description= description;
}

Victim::string getName()
{
    return name;
}

Victim::string getDeathTime()
{
    return timeOfDeath;
}
