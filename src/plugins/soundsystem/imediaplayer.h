#ifndef IMEDIAPLAYER_H
#define IMEDIAPLAYER_H

#include "soundsystem_global.h"

#include <QObject>

namespace PlaylistManager
{
class Playlist;
}

namespace SoundSystem {

class SOUNDSYSTEM_EXPORT IMediaPlayer : public QObject
{
    Q_OBJECT

public:
    IMediaPlayer(QObject *parent = 0)
        : QObject(parent) {}

    virtual ~IMediaPlayer() {}

    /**
     * @return an unique id for a player
     */
    virtual QString id() const = 0;

    /**
     * media play controls
     */
    virtual void play() = 0;
    virtual void stop() = 0;
    virtual void pause() = 0;

    virtual PlaylistManager::Playlist *playlist() const = 0;
    virtual void setPlaylist(PlaylistManager::Playlist *playlist) = 0;

    virtual int volume() const = 0;
    virtual void setVolume(int volume) =  0;

    virtual qreal playbackRate() const = 0;
    virtual void setPlaybackRate(qreal rate) = 0;

    virtual QStringList supportedMultimediaTypes() const = 0;

signals:
    void playlistChanged(PlaylistManager::Playlist *playlist);
    void volumeChanged(int volume);
    void playbackRateChanged(qreal rate);
};

} // namespace SoundSystem

#endif // IMEDIAPLAYER_H
