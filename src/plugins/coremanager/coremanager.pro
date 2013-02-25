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
    actionmanager/command.h \
    actionmanager/action.h \
    actionmanager/shortcut.h \
    actionmanager/menuactioncontainer.h \
    actionmanager/menubaractioncontainer.h \
    actionmanager/toolbaractioncontainer.h

SOURCES += \
    coremanager_private.cpp \
    coremanagerplugin.cpp \
    actionmanager/actionmanager_private.cpp \
    actionmanager/actionmanager.cpp \
    actionmanager/actioncontainer.cpp \
    actionmanager/command.cpp \
    actionmanager/action.cpp \
    actionmanager/shortcut.cpp \
    actionmanager/menuactioncontainer.cpp \
    actionmanager/menubaractioncontainer.cpp \
    actionmanager/toolbaractioncontainer.cpp

