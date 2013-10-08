#ifndef ROOM_H
#define ROOM_H

class Room
{
    private:
        Vector<Clue> *clues;
        Person *person;
    public:
        Room(Person *p);
        Person getPerson();
        void addClue(Clue *c);
        int numberOfClues();
};

#endif // ROOM_H
