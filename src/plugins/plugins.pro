TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    coremanager_plugin \
    soundsystem_plugin \
    gui-core \
    audiodevices \
    playlistmanager

coremanager_plugin.subdir = coremanager

audiodevices.subdir = audiodevices
audiodevices.depends = coremanager

soundsystem_plugin.subdir = soundsystem
soundsystem_plugin.depends = coremanager


