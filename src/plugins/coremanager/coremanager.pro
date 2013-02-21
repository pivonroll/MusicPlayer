include(coremanagerplugin_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(coremanager)

DESTDIR = $$PLUGIN_PATH

HEADERS += \
    coremanager_private.h \
    coremanagerplugin.h \
    coremanager_constants.h

SOURCES += \
    coremanager_private.cpp \
    coremanagerplugin.cpp
