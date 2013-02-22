include(soundsystem_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(soundsystem)

DESTDIR = $$PLUGIN_PATH

HEADERS += \
    soundsystemplugin.h \
    soundsystem_constants.h

SOURCES += \
    soundsystemplugin.cpp
