#ifndef PLAYLISTMANAGER_PLAYLIST_H
#define PLAYLISTMANAGER_PLAYLIST_H

#include "playlistmanager_global.h"
#include <QObject>

QT_BEGIN_NAMESPACE
class QMediaPlaylist;
QT_END_NAMESPACE

namespace PlaylistManager {

class PLAYLISTMANAGERSHARED_EXPORT Playlist : public QObject
{
public:
    Playlist(QObject *parent = 0);

    QString displayName() const;
    void setDisplayName(const QString &displayName);

    QMediaPlaylist *content() const;

private:
    QString m_displayName;
    QMediaPlaylist *m_playlist;
};

} // namespace PlaylistManager

#endif // PLAYLISTMANAGER_PLAYLIST_H
