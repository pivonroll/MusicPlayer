#include "audiodevicewatcher.h"

namespace AudioDevices {

AudioDeviceWatcher* AudioDeviceWatcher::m_instance = 0;

AudioDeviceWatcher::AudioDeviceWatcher()
{
    m_instance = this;
}

} // namespace AudioDevices
