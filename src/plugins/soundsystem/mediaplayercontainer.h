#ifndef SOUNDSYSTEM_MEDIAPLAYER_H
#define SOUNDSYSTEM_MEDIAPLAYER_H

#include "soundsystem_global.h"

#include <QObject>
#include <QList>

namespace SoundSystem {

class IMediaPlayer;

class SOUNDSYSTEM_EXPORT MediaPlayerContainer : public QObject
{
    static IMediaPlayer *mediaPlayer(int index);
    static QList<IMediaPlayer *> mediaPlayers(const QString &multimediaDataType);
    static int mediaPlayerCount();
    static void addMediaPlayer(IMediaPlayer *player);
    static void removeMediaPlayer(IMediaPlayer *player);

private:
    static MediaPlayerContainer *instance();
    MediaPlayerContainer(QObject *parent = 0);
    QList<IMediaPlayer *> m_mediaPlayers;

    static MediaPlayerContainer *m_instance;
};

} // namespace SoundSystem

#endif // SOUNDSYSTEM_MEDIAPLAYER_H
