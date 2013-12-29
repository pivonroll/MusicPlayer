include(gui-coreplugin_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(gui-core)

DESTDIR = $$PLUGIN_PATH

HEADERS += \
    guicoreplugin.h \
    guicoreplugin_constants.h \
    mainwindow.h \
    actionmanager/actioncontainer.h \
    actionmanager/actionmanager_constants.h \
    actionmanager/actionmanager_private.h \
    actionmanager/actionmanager.h \
    actionmanager/menuactioncontainer.h \
    actionmanager/menubaractioncontainer.h \
    actionmanager/shortcut.h \
    actionmanager/toolbaractioncontainer.h

SOURCES += \
    guicoreplugin.cpp \
    mainwindow.cpp \
    actionmanager/actioncontainer.cpp \
    actionmanager/actionmanager_private.cpp \
    actionmanager/actionmanager.cpp \
    actionmanager/menuactioncontainer.cpp \
    actionmanager/menubaractioncontainer.cpp \
    actionmanager/shortcut.cpp \
    actionmanager/toolbaractioncontainer.cpp
