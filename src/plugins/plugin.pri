include(../extensionsystem/extensionsystem.pri)

CONFIG += plugin
INCLUDEPATH += $$PWD/../extensionsystem
LIBS *= -lExtensionSystem

#unix:!macx {
#   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN
#   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN/..
#   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN/../lib
#}

