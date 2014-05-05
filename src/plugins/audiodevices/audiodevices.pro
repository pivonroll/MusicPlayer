#-------------------------------------------------
#
# Project created by QtCreator 2014-05-05T08:24:12
#
#-------------------------------------------------

include(audiodevices_dependencies.pri)

QT       += multimedia
QT       -= gui

TARGET = audiodevices
TEMPLATE = lib

DEFINES += AUDIODEVICES_LIBRARY

SOURCES += \
    audiodevicesplugin.cpp \
    audiodevice.cpp \
    audiodevicemanager.cpp

HEADERS +=\
	audiodevices_global.h \
    audiodevicesplugin.h \
    audiodevice.h \
    audiodevicemanager.h

OTHER_FILES += \
    audiodevices.json
