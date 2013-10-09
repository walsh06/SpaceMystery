#include "spacemystery.h"


int main(int argc, char *argv[])
{
    Player *player1;
    Person *p1;
    Room *room1, *room2;

    Clue *c1, *c2, *c3;
    string *clued = new string("Blood");
    c1 = new Clue(clued);
    c2 = new Clue(new string("Dagger"));

    room1 = new Room(p1);
    room1->addClue(c1);
    room1->addClue(c2);

    printf("%d", room1->numberOfClues());
}

SpaceMystery::SpaceMystery()
{
}
