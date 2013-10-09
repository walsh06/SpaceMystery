#ifndef PLAYER_H
#define PLAYER_H

#include "clue.h"
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
        int getOxygen();
        void loseOxygen();
        void resupplyOxygen();
        void addClue(Clue *c);
};

#endif // PLAYER_H
