#ifndef CLUE_H
#define CLUE_H

#include <string>
using namespace std;

class Clue
{
    private:
        string *description;
        bool found;

    public:
        Clue(string*);
        string* getDescription();
        bool isFound();
};

#endif // CLUE_H


