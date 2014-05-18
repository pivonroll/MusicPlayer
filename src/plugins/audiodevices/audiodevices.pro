#-------------------------------------------------
#
# Project created by QtCreator 2014-05-05T08:24:12
#
#-------------------------------------------------

include(audiodevices_dependencies.pri)

QT       += multimedia
QT       -= gui

TARGET = $$qtLibraryTarget(audiodevices)
TEMPLATE = lib

DEFINES += AUDIODEVICES_LIBRARY
DESTDIR = $$PLUGIN_PATH

SOURCES += \
    audiodevicesplugin.cpp \
    audiodevice.cpp \
    audiodevicemanager.cpp \
    audiodevicewatcher.cpp \
    audiodevicediscoverymanager.cpp

HEADERS +=\
	audiodevices_global.h \
    audiodevicesplugin.h \
    audiodevice.h \
    audiodevicemanager.h \
    audiodevicewatcher.h \
    audiodevicediscoverymanager.h

OTHER_FILES += \
    audiodevices.json

