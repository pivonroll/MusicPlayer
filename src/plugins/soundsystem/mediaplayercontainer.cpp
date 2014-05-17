#include "mediaplayercontainer.h"

namespace SoundSystem {

MediaPlayerContainer* MediaPlayerContainer::m_instance = 0;

MediaPlayerContainer *MediaPlayerContainer::instance()
{
    return m_instance;
}

IMediaPlayer *MediaPlayerContainer::mediaPlayer(int index)
{
    return m_instance->m_mediaPlayers[index];
}

MediaPlayerContainer::MediaPlayerContainer(QObject *parent)
    : QObject(parent)
{
    m_instance = this;
}

} // namespace SoundSystem
