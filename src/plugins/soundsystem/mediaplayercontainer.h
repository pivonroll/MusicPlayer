#ifndef SOUNDSYSTEM_MEDIAPLAYER_H
#define SOUNDSYSTEM_MEDIAPLAYER_H

#include "soundsystem_global.h"

#include <QObject>
#include <QList>

namespace SoundSystem {

class IMediaPlayer;

class SOUNDSYSTEM_EXPORT MediaPlayerContainer : public QObject
{
    static MediaPlayerContainer *instance();

    static IMediaPlayer *mediaPlayer(int index);

private:
    MediaPlayerContainer(QObject *parent = 0);
    QList<IMediaPlayer *> m_mediaPlayers;

    static MediaPlayerContainer *m_instance;
};

} // namespace SoundSystem

#endif // SOUNDSYSTEM_MEDIAPLAYER_H
