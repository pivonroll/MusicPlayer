#include "audiodevicediscoverymanager.h"

namespace AudioDevices {

AudioDeviceDiscoveryService* AudioDeviceDiscoveryService::m_instance = 0;

AudioDeviceDiscoveryService *AudioDeviceDiscoveryService::instance()
{
    return m_instance;
}

AudioDeviceDiscoveryService::AudioDeviceDiscoveryService()
{
    m_instance = this;
}

} // namespace AudioDevices
