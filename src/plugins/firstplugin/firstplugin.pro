include(../../../config.pri)
include(../plugin.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(firstplugin)

DESTDIR = $$PLUGIN_PATH

INCLUDEPATH += ../../extensionsystem

LIBS *= -lExtensionSystem

HEADERS += \
    firstplugin.h

SOURCES += \
    firstplugin.cpp
