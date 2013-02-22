include(coremanagerplugin_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(coremanager)

DESTDIR = $$PLUGIN_PATH

HEADERS += \
    coremanager_private.h \
    coremanagerplugin.h \
    coremanager_constants.h \
    actionmanager/actionmanager_private.h \
    actionmanager/actionmanager.h \
    actionmanager/actioncontainer.h

SOURCES += \
    coremanager_private.cpp \
    coremanagerplugin.cpp \
    actionmanager/actionmanager_private.cpp \
    actionmanager/actionmanager.cpp \
    actionmanager/actioncontainer.cpp

