 
#-------------------------------------------------
#
# Project created by QtCreator 2013-02-20T20:53:56
#
#-------------------------------------------------
include(../config.pri)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PluginTest
TEMPLATE = app
INCLUDEPATH += ../extensionsystem

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h
FORMS    += widget.ui

DESTDIR = $$BINARY_PATH
LIBS += -L$$LIBRARY_PATH
LIBS *= -lExtensionSystem

unix:!macx{
    QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN/..
    QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN/../lib
}
