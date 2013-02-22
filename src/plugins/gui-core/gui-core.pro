include(gui-coreplugin_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(gui-core)

DESTDIR = $$PLUGIN_PATH

HEADERS += \
    guicoreplugin.h \
    guicoreplugin_constants.h \
    mainwindow.h

SOURCES += \
    guicoreplugin.cpp \
    mainwindow.cpp
