#-------------------------------------------------
#
# Project created by QtCreator 2013-10-05T15:13:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpaceMystery
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    person.cpp \
    clue.cpp \
    room.cpp

HEADERS  += mainwindow.h \
    player.h \
    person.h \
    clue.h \
    room.h

FORMS    += mainwindow.ui
