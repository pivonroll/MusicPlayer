#ifndef AUDIODEVICES_AUDIODEVICEDISCOVERYMANAGER_H
#define AUDIODEVICES_AUDIODEVICEDISCOVERYMANAGER_H

namespace AudioDevices {

class AudioDeviceDiscoveryService
{
public:
    static void start();
    static void stop();
private:
    static AudioDeviceDiscoveryService *instance();
    AudioDeviceDiscoveryService();

    static AudioDeviceDiscoveryService *m_instance;
};

} // namespace AudioDevices

#endif // AUDIODEVICES_AUDIODEVICEDISCOVERYMANAGER_H
