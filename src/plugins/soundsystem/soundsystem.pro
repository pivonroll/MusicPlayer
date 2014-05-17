include(soundsystem_dependecies.pri)

QT += multimedia

TEMPLATE = lib
TARGET = $$qtLibraryTarget(soundsystem)

DESTDIR = $$PLUGIN_PATH
DEFINES += SOUNDSYSTEM_LIBRARY

include(interfaces/interfaces.pri)

HEADERS += \
    soundsystemplugin.h \
    soundsystem_constants.h \
    soundsystem_global.h \
    mediaplayercontainer.h \
    imediaplayer.h

SOURCES += \
    soundsystemplugin.cpp \
    mediaplayercontainer.cpp

OTHER_FILES += \
    soundsystem.json
