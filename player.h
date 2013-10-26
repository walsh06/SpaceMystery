#ifndef PLAYER_H
#define PLAYER_H
#include "Clue.h"
#include "Person.h"
#include <string>
#include <vector>
using namespace std;
using std::vector;

class Player
{
    private:
        int oxygen;
        vector <Clue*> clues;
        vector <Person> suspects;

    public:
        Player();
        vector <Clue*> getClues();
        Clue* getClue(int);
        int getOxygen();
        void loseOxygen();
        void resupplyOxygen();
        void addClue(Clue *c);
        void printClues();
        void addSuspect(Person *p);
        vector<Person> getSuspects();
};

#endif // PLAYER_H
