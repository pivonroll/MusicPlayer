include(plugins_dependecies.pri)

CONFIG += plugin
LIBS += -L$$PLUGIN_PATH

unix:!macx {
   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN
   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN/../lib
}

