#include "playlistmanager.h"

#include "playlist.h"

namespace PlaylistManager {

PlaylistContainer::PlaylistContainer(QObject *parent)
    : QObject(parent)
{
}

int PlaylistContainer::playlistCount() const
{
    return 0;
}

Playlist *PlaylistContainer::playlist(int index) const
{
    if (0 <= index && index < m_playlists.size())
        return m_playlists[index];
    return 0;
}

void PlaylistContainer::addPlaylist(Playlist *playlist)
{
    if (m_playlists.contains(playlist)) {
        m_playlists.append(playlist);
        playlistAdded(playlist);
    }
}

void PlaylistContainer::removePlaylist(Playlist *playlist)
{
    if (!playlist || !m_playlists.contains(playlist))
        return;

    m_playlists.removeAll(playlist);
    playlistRemoved(playlist);
    playlist->deleteLater();
}

} // namespace PlaylistManager
