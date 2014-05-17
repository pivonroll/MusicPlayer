TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
    coremanager_plugin \
    soundsystem_plugin \
	gui-core_plugin \
	audiodevices_plugin \
	playlistmanager_plugin \
	basicmediaplayer_plugin

coremanager_plugin.subdir = coremanager

playlistmanager_plugin.subdir = playlistmanager

audiodevices_plugin.subdir = audiodevices
audiodevices_plugin.depends = coremanager

soundsystem_plugin.subdir = soundsystem
soundsystem_plugin.depends = coremanager

gui-core_plugin.subdir = gui/gui-core
gui-core_plugin.depends = coremanager

basicmediaplayer_plugin.subdir = basicmediaplayer
basicmediaplayer_plugin.depends = soundsystem_plugin
