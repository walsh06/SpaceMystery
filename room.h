#ifndef ROOM_H
#define ROOM_H
#include "Clue.h"
#include "Person.h"
#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;
using std::vector;


class Room
{
    private:
        vector <Clue> clues;
        map<string, Room*> exits;
        Person *person;
        string *description;

    public:
        Room(string* roomDescription);
        Room(string* roomDescription, Person *p);
        Person* getPerson();
        void addClue(Clue *c);
        int numberOfClues();
        string* getDescription();
        void getFullDescription();
        Clue* getClue(int);
        void setExits(Room *exit1, Room *exit2 = NULL, Room *exit3 = NULL, Room *exit4 = NULL);
        map<string, Room *> getExits();
};

#endif // ROOM_H
