#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
using namespace std;
using std::vector;
class Person
{
    private:
        vector<string> conversation;
        bool innocent;
        string *name;
    public:
        Person(string *name, bool innoccent);
        string* getName();
        bool isInnocent();
};

#endif // PERSON_H
