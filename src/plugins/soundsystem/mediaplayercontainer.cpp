#include "mediaplayercontainer.h"
#include "imediaplayer.h"

#include <QStringList>

namespace SoundSystem {

MediaPlayerContainer* MediaPlayerContainer::m_instance = 0;

MediaPlayerContainer *MediaPlayerContainer::instance()
{
    return m_instance;
}

IMediaPlayer *MediaPlayerContainer::mediaPlayer(int index)
{
    return instance()->m_mediaPlayers[index];
}

QList<IMediaPlayer *> MediaPlayerContainer::mediaPlayers(const QString &multimediaDataType)
{
    QList<IMediaPlayer *> players;
    foreach (IMediaPlayer *const player, instance()->m_mediaPlayers) {
        if (player->supportedMultimediaTypes().contains(multimediaDataType))
            players.append(player);
    }

    return players;
}

int MediaPlayerContainer::mediaPlayerCount()
{
    return instance()->m_mediaPlayers.size();
}

void MediaPlayerContainer::addMediaPlayer(IMediaPlayer *player)
{
    if (!instance()->m_mediaPlayers.contains(player))
        instance()->m_mediaPlayers.append(player);
}

void MediaPlayerContainer::removeMediaPlayer(IMediaPlayer *player)
{
    instance()->m_mediaPlayers.removeAll(player);
}

MediaPlayerContainer::MediaPlayerContainer(QObject *parent)
    : QObject(parent)
{
    m_instance = this;
}

} // namespace SoundSystem
