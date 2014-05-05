#ifndef AUDIODEVICES_AUDIODEVICE_H
#define AUDIODEVICES_AUDIODEVICE_H

#include "audiodevices_global.h"
#include <QAudioFormat>

namespace AudioDevices {

class AUDIODEVICESSHARED_EXPORT AudioDevice
{
public:
    AudioDevice();

    QString deviceName() const;

    int supportedChannelsCount() const;
    int supportedChannels(int index) const;

    int supportedSampleRatesCount() const;
    int supportedSampleRate(int index) const;

    int supportedSampleSizeCount() const;
    int supportedSampleSize(int index) const;

    int supportedSampleTypeCount() const;
    QAudioFormat::SampleType supportedSampleType(int index) const;

    QAudioFormat defaultSupportedAudioFormat() const;
    QAudioFormat closestSystemSupportedFormat() const;
};

} // namespace AudioDevices

#endif // AUDIODEVICES_AUDIODEVICE_H
