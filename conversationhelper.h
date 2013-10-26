#ifndef CONVERSATIONHELPER_H
#define CONVERSATIONHELPER_H
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class ConversationHelper
{
public:
    ConversationHelper();
    string getMessage(string charName, int id, int index);
   // std::vector getQuestions(string charName, int id);
    std::vector<string> getQuestions(string charName, int id);


private:
    //std::vector split(string fullString, string delimiter);

};


#endif // CONVERSATIONHELPER_H
