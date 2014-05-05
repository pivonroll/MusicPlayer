#include "audiodevice.h"

namespace AudioDevices {

AudioDevice::AudioDevice()
{
}

QString AudioDevice::deviceName() const
{
    return QString();
}

int AudioDevice::supportedChannelsCount() const
{
    return 0;
}

int AudioDevice::supportedChannels(int index) const
{
    Q_UNUSED(index)
    return 0;
}

int AudioDevice::supportedSampleRatesCount() const
{
    return 0;
}

int AudioDevice::supportedSampleRate(int index) const
{
    Q_UNUSED(index)
    return 0;
}

int AudioDevice::supportedSampleSizeCount() const
{
    return 0;
}

int AudioDevice::supportedSampleSize(int index) const
{
    Q_UNUSED(index)
    return 0;
}

int AudioDevice::supportedSampleTypeCount() const
{
    return 0;
}

QAudioFormat::SampleType AudioDevice::supportedSampleType(int index) const
{
    return QAudioFormat::Float;
}

QAudioFormat AudioDevice::defaultSupportedAudioFormat() const
{
    return QAudioFormat();
}

QAudioFormat AudioDevice::closestSystemSupportedFormat() const
{
    return QAudioFormat();
}

} // namespace AudioDevices
