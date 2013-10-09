#ifndef CLUE_H
#define CLUE_H

class Clue
{
    private:
        string description;
        bool found;
        bool valid;

    public:
        Clue();
        string getDescription();
        bool isFound();
};

#endif // CLUE_H
