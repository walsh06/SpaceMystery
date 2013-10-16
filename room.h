#ifndef ROOM_H
#define ROOM_H
#include "Clue.h"
#include "Person.h"
#include <string>
#include <vector>

using namespace std;
using std::vector;

class Room
{
    private:
        vector <Clue> clues;
        Person *person;
        string *description;

    public:
        Room();
        Room(Person *p);
        Person* getPerson();
        void addClue(Clue *c);
        int numberOfClues();
        string* getDescription();
};

#endif // ROOM_H
