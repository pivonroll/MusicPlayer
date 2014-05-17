#-------------------------------------------------
#
# Project created by QtCreator 2014-05-16T00:30:59
#
#-------------------------------------------------
include(basicmediaplayer_dependencies.pri)

QT       += multimedia gui

TARGET = $$qtLibraryTarget(BasicMediaPlayer)
TEMPLATE = lib

DEFINES += BASICMEDIAPLAYER_LIBRARY
DESTDIR = $$PLUGIN_PATH

SOURCES += \
    basicmediaplayerplugin.cpp

HEADERS +=\
        basicmediaplayer_global.h \
    basicmediaplayerplugin.h


