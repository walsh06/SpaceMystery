#include "spacemystery.h"


int main(int argc, char *argv[])
{
    SpaceMystery sm;
    sm.play();
    return 0;
}

SpaceMystery::SpaceMystery()
{
    gameOver = false;
    gameWin = false;
    p = new Player();
    string *blood = new string("blood");
    string *dagger = new string("dagger");
    Clue *c1 = new Clue(blood);
    Clue *c2 = new Clue(dagger);
    Clue *c3 = new Clue(new string("clothes"));
    Person *p1 = new Person(new string("John"), true);
    Person *p2 =new Person(new string("Liam"), true);
    Person *p3 = new Person(new string("Tom"), false);
    r1 = new Room(new string("Hall"), p1);
    r2 = new Room(new string("Bedroom"), p2);
    r3 = new Room(new string("kitchen"), p3);

    currentRoom = r1;

    r1->setExits(r2);
    r2->setExits(r3);

    p->addSuspect(p1);
    p->addSuspect(p2);
    p->addSuspect(p3);
    r1->addClue(c1);
    r2->addClue(c2);
    r3->addClue(c3);
}

void SpaceMystery::play()
{
    int count = 0;
    while(gameOver == false)
    {
        currentRoom->getFullDescription();
        p->printClues();
        if(count == 0)
        {
            p->addClue(currentRoom->getClue(0));
            goTo("Bedroom");
        }
        else if(count == 1)
        {
            p->addClue(currentRoom->getClue(0));
            goTo("kitchen");
        }
        else if (count == 2)
        {
            accuse("John");
        }
        count++;
    }
}



void SpaceMystery::accuse(string name)
{
    Person *accused = getSuspect(name);
    bool innocent = accused->isInnocent();

    if(innocent == true)
    {
        cout << "You accused an innocent person" << endl;
    }
    else
    {
        gameWin = true;
        cout << "You accuesd the murderer" << endl;
    }
    gameOver = true;
}

Person* SpaceMystery::getSuspect(string name)
{
    vector<Person> suspects = p->getSuspects();
    for(int i = 0; i < suspects.size(); i++)
    {
        string suspectName = *suspects[i].getName();
        if(suspectName == name)
        {
            return &suspects[i];
        }
    }
}

void SpaceMystery::goTo(string roomName)
{
    map<string, Room*> currentExits = currentRoom->getExits();
    map<string, Room*>::iterator next = currentExits.find(roomName); //returns an iterator for the "pair"
    if (next != currentExits.end())
    {
        cout << "Moved to the " << roomName << endl;
        currentRoom = next->second;
    }
    else
    {
        cout << "That room is not an exit" << endl;
    }
}
