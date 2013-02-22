TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    coremanager_plugin \
    soundsystem_plugin \
    gui-core

coremanager_plugin.subdir = coremanager

soundsystem_plugin.subdir = soundsystem
soundsystem_plugin.depends = coremanager

