#include "audiodevicemanager.h"

namespace AudioDevices {

AudioDeviceManager* AudioDeviceManager::m_instance = 0;

int AudioDeviceManager::availableAudioDeviceCount()
{
    return instance()->m_audioDevices.size();
}

AudioDevice *AudioDeviceManager::audioDevice(int index)
{
    if (0 <= index && index < instance()->m_audioDevices.size())
        return instance()->m_audioDevices[index];
    return 0;
}

AudioDeviceManager *AudioDeviceManager::instance()
{
    return m_instance;
}

AudioDeviceManager::AudioDeviceManager()
{
    m_instance = this;
}

} // namespace AudioDevices
