#ifndef AUDIODEVICES_PLUGIN_H
#define AUDIODEVICES_PLUGIN_H

#include "audiodevices_global.h"
#include <iplugin.h>

namespace AudioDevices {

class AUDIODEVICESSHARED_EXPORT AudioDevicesPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPlugin_iic FILE "audiodevices.json")
    Q_INTERFACES(ExtensionSystem::IPlugin)

public:
    AudioDevicesPlugin();

    // IPlugin interface
public:
    void initialize();
    QString pluginName() const;
};

} // AudioDevices
#endif // AUDIODEVICES_PLUGIN_H
