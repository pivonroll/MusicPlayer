#ifndef AUDIODEVICES_AUDIODEVICEMANAGER_H
#define AUDIODEVICES_AUDIODEVICEMANAGER_H

#include "audiodevices_global.h"

#include <QList>

namespace AudioDevices {

class AudioDevice;

class AUDIODEVICESSHARED_EXPORT AudioDeviceManager
{
public:
    static int availableAudioDeviceCount();
    static AudioDevice *audioDevice(int index);

private:
    static AudioDeviceManager *instance();
    AudioDeviceManager();
    static AudioDeviceManager *m_instance;

    QList<AudioDevice *> m_audioDevices;
};

} // namespace AudioDevices

#endif // AUDIODEVICES_AUDIODEVICEMANAGER_H
