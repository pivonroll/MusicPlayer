#ifndef PLAYLISTMANAGER_PLAYLISTMANAGERPLUGIN_H
#define PLAYLISTMANAGER_PLAYLISTMANAGERPLUGIN_H

#include "playlistmanager_global.h"
#include <iplugin.h>

namespace PlaylistManager {

class PLAYLISTMANAGERSHARED_EXPORT PlaylistManagerPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPlugin_iic FILE "playlistmanager.json")
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    PlaylistManagerPlugin();

    void initialize();
    QString pluginName() const;
};


} // namespace PlaylistManager
#endif // PLAYLISTMANAGER_PLAYLISTMANAGERPLUGIN_H
