include(soundsystem_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(soundsystem)

DESTDIR = $$PLUGIN_PATH
DEFINES += SOUNDSYSTEM_LIBRARY

HEADERS += \
    soundsystemplugin.h \
    soundsystem_constants.h \
    soundsystem_global.h

SOURCES += \
    soundsystemplugin.cpp
