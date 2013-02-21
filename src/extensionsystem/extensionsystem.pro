include(../config.pri)

TEMPLATE = lib
TARGET = ExtensionSystem
CONFIG += shared dll
DEFINES += EXTENSIONSYSTEM_LIBRARY

HEADERS += \
    extensionsystem_global.h \
    pluginmanager.h \
    iplugin.h

SOURCES += \
    pluginmanager.cpp \
    iplugin.cpp

DESTDIR = $$LIBRARY_PATH
