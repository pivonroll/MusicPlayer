#include "audiodevicesplugin.h"

namespace AudioDevices {

AudioDevicesPlugin::AudioDevicesPlugin()
{
}

void AudioDevicesPlugin::initialize()
{

}

QString AudioDevicesPlugin::pluginName() const
{
    return QLatin1String("AudioDevicesPlugin");
}

} // AudioDevices

Q_PLUGIN_METADATA(IID IPlugin_iic)
