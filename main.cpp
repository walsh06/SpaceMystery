#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Player *player();
    Room *room1, *room2;

    room1 = new Room();


    return a.exec();
}
