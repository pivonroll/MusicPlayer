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
    actionmanager/actioncontainer.h \
    actionmanager/actioncontainer_private.h \
    actionmanager/command.h

SOURCES += \
    coremanager_private.cpp \
    coremanagerplugin.cpp \
    actionmanager/actionmanager_private.cpp \
    actionmanager/actionmanager.cpp \
    actionmanager/actioncontainer.cpp \
    actionmanager/actioncontainer_private.cpp \
    actionmanager/command.cpp

