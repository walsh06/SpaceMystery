#include "Person.h"

Person::Person(string *name, bool innocent)
{
    this->name = name;
    this->innocent = innocent;
}

string* Person::getName()
{
    return name;
}

bool Person::isInnocent()
{
    return innocent;
}

