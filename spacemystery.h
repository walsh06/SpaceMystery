#ifndef SPACEMYSTERY_H
#define SPACEMYSTERY_H

#include "Player.h"
#include "Room.h"
#include "Person.h"
#include <iostream>
#include <map>

using namespace std;

class SpaceMystery
{
private:
    Player *p;
    Room *currentRoom;
    bool gameOver;
    bool gameWin;
    Room *r1, *r2, *r3;
public:
    SpaceMystery();
    void accuse(string name);
    void play();
    Person* getSuspect(string name);
    void goTo(string roomName);

};

#endif // SPACEMYSTERY_H
