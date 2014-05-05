include(soundsystem_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(soundsystem)

DESTDIR = $$PLUGIN_PATH
DEFINES += SOUNDSYSTEM_LIBRARY

include(interfaces/interfaces.pri)

HEADERS += \
    soundsystemplugin.h \
    soundsystem_constants.h \
    soundsystem_global.h

SOURCES += \
    soundsystemplugin.cpp

OTHER_FILES += \
    soundsystem.json
