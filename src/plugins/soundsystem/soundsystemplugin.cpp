#include "soundsystemplugin.h"
#include "soundsystem_constants.h"
#include <coremanagerplugin.h>

namespace PlaySystem {
namespace Internal {

SoundSystemPlugin::SoundSystemPlugin()
{
}

SoundSystemPlugin::~SoundSystemPlugin()
{
}

void SoundSystemPlugin::initialize()
{
    CoreManagerPlugin::Internal::CorePlugin *p = CoreManagerPlugin::Internal::CorePlugin::instance();
    Q_UNUSED(p)
}

QString SoundSystemPlugin::pluginName() const
{
    return QString(Constants::SoundSystemPlugin_Name);
}

} // namespace Internal
} // namespace PlaySystem

Q_EXPORT_PLUGIN(PlaySystem::Internal::SoundSystemPlugin)
