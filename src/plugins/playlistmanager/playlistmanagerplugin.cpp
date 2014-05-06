#include "playlistmanagerplugin.h"


namespace PlaylistManager {

PlaylistManagerPlugin::PlaylistManagerPlugin()
{
}

void PlaylistManagerPlugin::initialize()
{

}

QString PlaylistManagerPlugin::pluginName() const
{
    return QLatin1String("PlaylistManagerPlugin");
}

} // namespace PlaylistManager

Q_PLUGIN_METADATA(IID IPlugin_iic)
