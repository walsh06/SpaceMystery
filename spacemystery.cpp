#include "spacemystery.h"


int main(int argc, char *argv[])
{
    Player *p = new Player();
    string *blood = new string("blood");
    Clue *c1 = new Clue(blood);
    Room *r = new Room();

    r->addClue(c1);

    string *s = new string("blood");
    p->addClue(new Clue(s));

    Clue pc = p->getClue(0);
    cout << *r->getDescription() << endl;
    cout << r->numberOfClues() << endl;
    cout << *pc.getDescription() << endl;
}

SpaceMystery::SpaceMystery()
{
}
