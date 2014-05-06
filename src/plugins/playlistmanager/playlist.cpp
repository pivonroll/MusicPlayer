#include "playlist.h"

#include <QMediaPlaylist>

namespace PlaylistManager {

Playlist::Playlist(QObject *parent)
    : QObject(parent),
      m_playlist(new QMediaPlaylist(this))
{
}

QString Playlist::displayName() const
{
    return m_displayName;
}

void Playlist::setDisplayName(const QString &displayName)
{
    m_displayName = displayName;
}

QMediaPlaylist *Playlist::content() const
{
    return m_playlist;
}


} // namespace PlaylistManager
