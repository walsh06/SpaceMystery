#include "conversationhelper.h"
#include <fstream>
#include <iostream>

using namespace std;

ConversationHelper::ConversationHelper()
{

}

string ConversationHelper::getMessage(string name, int id, int index)
{
    string line;
    ifstream myfile("Conversations/Chef/0/Answers.txt");
    if (myfile.is_open())
    {
      for (int i = 0; getline(myfile,line); i++)
      {
         // ui->label->setText(QString::fromStdString(line));
         //
          //cout << line << " \n";
          if (i == index)
              return line;
      }

      myfile.close();
    }
    else
        return "no";
}

std::vector<string> ConversationHelper::getQuestions(string charName, int id)
{
    std::vector<string> questions;
    string line;
    ifstream myfile ("Conversations/Chef/0/Questions.txt");
    if (myfile.is_open())
    {
      while (getline(myfile,line) )
      {
         // ui->label->setText(QString::fromStdString(line));
         //
          //cout << line << " \n";
          questions.push_back(line);
      }

      myfile.close();
      return questions;
    }

   // else return "Unable to open";//cout << "Unable to open file \n";
}

/*
std::vector ConversationHelper::split(string fullString, string delimeter)
{
    size_t pos = 0;
    std::vector token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        token.insert(token);
        s.erase(0, pos + delimiter.length());
    }
}
*/
