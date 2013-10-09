#ifndef VICTIM_H
#define VICTIM_H

#include "person.h"

class Victim: public Person
{
    private:
        string *name;
        string *timeOfDeath;
        Vector<Clue> *clues;

    public:
        clue getClue();
        string getName();
        string getDeathTime();

};


#endif // VICTIM_H
