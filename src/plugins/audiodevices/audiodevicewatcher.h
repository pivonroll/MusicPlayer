#ifndef AUDIODEVICES_AUDIODEVICEWATCHER_H
#define AUDIODEVICES_AUDIODEVICEWATCHER_H

#include <QObject>

namespace AudioDevices {

class AudioDevice;

class AudioDeviceWatcher : public QObject
{
    Q_OBJECT
    static void start();
    static void stop();
signals:
    void audioDeviceFound(AudioDevice *audioDevice);
    void audioDeviceRemoved(AudioDevice *audioDevice);

private:
    static AudioDeviceWatcher *instance();
    AudioDeviceWatcher();

    static AudioDeviceWatcher *m_instance;
};

} // namespace AudioDevices

#endif // AUDIODEVICES_AUDIODEVICEWATCHER_H
