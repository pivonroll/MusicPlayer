include(coremanagerplugin_dependecies.pri)

TEMPLATE = lib
TARGET = $$qtLibraryTarget(coremanager)

DESTDIR = $$PLUGIN_PATH
DEFINES += COREMANAGER_LIBRARY

HEADERS += \
    coremanager_private.h \
    coremanagerplugin.h \
    coremanager_constants.h \
    context.h \
    mimedatabase/mimedatabase.h \
    mimedatabase/mimetype.h \
    mimedatabase/mimedatabase_private.h \
    coremanager_global.h

SOURCES += \
    coremanager_private.cpp \
    coremanagerplugin.cpp \
    mimedatabase/mimedatabase.cpp \
    mimedatabase/mimetype.cpp \
    mimedatabase/mimedatabase_private.cpp

