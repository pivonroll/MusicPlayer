#ifndef AUDIODEVICES_AUDIODEVICEMANAGER_H
#define AUDIODEVICES_AUDIODEVICEMANAGER_H

#include "audiodevices_global.h"
#include "audiodevice.h"

namespace AudioDevices {

class AUDIODEVICESSHARED_EXPORT AudioDeviceManager
{
public:
    AudioDeviceManager();

    int availableAudioDeviceCount() const;
    AudioDevice audioDevice(int index) const;
};

} // namespace AudioDevices

#endif // AUDIODEVICES_AUDIODEVICEMANAGER_H
