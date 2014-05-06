#ifndef PLAYLISTMANAGER_PLAYLISTMANAGER_H
#define PLAYLISTMANAGER_PLAYLISTMANAGER_H

#include <playlistmanager_global.h>

#include <QList>
#include <QObject>

namespace PlaylistManager {

class Playlist;

class PLAYLISTMANAGERSHARED_EXPORT PlaylistContainer : public QObject
{
    Q_OBJECT

public:
    PlaylistContainer(QObject *parent = 0);

    int playlistCount() const;
    Playlist *playlist(int index) const;
    void addPlaylist(Playlist *playlist);
    void removePlaylist(Playlist *playlist);

signals:
   void playlistAdded(Playlist *playlist);
   void playlistRemoved(Playlist *playlist);

private:
    QList<Playlist *> m_playlists;
};

} // namespace PlaylistManager

#endif // PLAYLISTMANAGER_PLAYLISTMANAGER_H
