#ifndef ROOM_H
#define ROOM_H

class Room
{
    private:
        Vector<Clue> *clues;
        Person *person;
    public:
        Room();
        Person getPerson();
        void addClue(Clue *c);
};

#endif // ROOM_H
