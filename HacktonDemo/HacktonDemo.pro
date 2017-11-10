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
        mainwindow.cpp \
    overview.cpp \
    settings.cpp

HEADERS  += mainwindow.h \
    types.h \
    overview.h \
    settings.h

FORMS    += mainwindow.ui \
    overview.ui \
    settings.ui

RESOURCES += \
    hack.qrc
