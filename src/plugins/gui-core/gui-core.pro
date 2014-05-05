include(gui-coreplugin_dependecies.pri)

QT += core gui widgets

TEMPLATE = lib
TARGET = $$qtLibraryTarget(guicore)

DESTDIR = $$PLUGIN_PATH
DEFINES += GUICORE_LIBRARY

HEADERS += \
    guicoreplugin.h \
    guicoreplugin_constants.h \
    mainwindow.h \
    actionmanager/actioncontainer.h \
    actionmanager/actionmanager_constants.h \
    actionmanager/actionmanager_private.h \
    actionmanager/actionmanager.h \
    actionmanager/menubaractioncontainer.h \
    actionmanager/shortcut.h \
    actionmanager/toolbaractioncontainer.h \
    actionmanager/menumanager.h \
    guicore_global.h

SOURCES += \
    guicoreplugin.cpp \
    mainwindow.cpp \
    actionmanager/actioncontainer.cpp \
    actionmanager/actionmanager_private.cpp \
    actionmanager/actionmanager.cpp \
    actionmanager/menubaractioncontainer.cpp \
    actionmanager/shortcut.cpp \
    actionmanager/toolbaractioncontainer.cpp \
    actionmanager/menumanager.cpp

OTHER_FILES += \
    guicore.json
