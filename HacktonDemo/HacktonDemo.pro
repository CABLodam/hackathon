#-------------------------------------------------
#
# Project created by QtCreator 2017-11-09T13:54:52
#
#-------------------------------------------------

QT += core gui
QT += widgets

TARGET = HacktonDemo
TEMPLATE = app

target.path = /opt/app/
INSTALLS += target

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    types.h

FORMS    += mainwindow.ui \
    settings.ui

RESOURCES += \
    hack.qrc
