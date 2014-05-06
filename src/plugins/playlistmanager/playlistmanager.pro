#-------------------------------------------------
#
# Project created by QtCreator 2014-05-05T10:03:45
#
#-------------------------------------------------

include(playlistmanager_dependencies.pri)

QT       += multimedia
QT       -= gui

TARGET = $$qtLibraryTarget(playlistmanager)
TEMPLATE = lib

DEFINES += PLAYLISTMANAGER_LIBRARY
DESTDIR = $$PLUGIN_PATH

SOURCES += playlistmanagerplugin.cpp \
    playlistmanager.cpp \
    playlist.cpp

HEADERS += playlistmanagerplugin.h\
        playlistmanager_global.h \
    playlistmanager.h \
    playlist.h

OTHER_FILES += \
    playlistmanager.json
