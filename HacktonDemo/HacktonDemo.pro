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
    settings.cpp \
    settings_edit.cpp \
    menu.cpp

HEADERS  += mainwindow.h \
    types.h \
    overview.h \
    settings.h \
    settings_edit.h \
    menu.h

FORMS    += mainwindow.ui \
    overview.ui \
    settings.ui \
    settings_edit.ui \
    menu.ui

RESOURCES += \
    hack.qrc
