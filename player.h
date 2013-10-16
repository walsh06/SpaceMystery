#ifndef PLAYER_H
#define PLAYER_H
#include "Clue.h"
#include <string>
#include <vector>
using namespace std;
using std::vector;

class Player
{
    private:
        int oxygen;
        vector <Clue> clues;

    public:
        Player();
        vector <Clue> getClues();
        Clue getClue(int);
        int getOxygen();
        void loseOxygen();
        void resupplyOxygen();
        void addClue(Clue *c);
};

#endif // PLAYER_H
