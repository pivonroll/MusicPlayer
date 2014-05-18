#include "soundsystemplugin.h"
#include "soundsystem_constants.h"
#include <coremanagerplugin.h>

namespace SoundSystem {
namespace Internal {

SoundSystemPlugin::SoundSystemPlugin()
{
}

SoundSystemPlugin::~SoundSystemPlugin()
{
}

void SoundSystemPlugin::initialize()
{
    Core::Internal::CorePlugin *p = Core::Internal::CorePlugin::instance();
    Q_UNUSED(p)
}

QString SoundSystemPlugin::pluginName() const
{
    return QString(Constants::SoundSystemPlugin_Name);
}

} // namespace Internal
} // namespace SoundSystem

Q_PLUGIN_METADATA(IID IPlugin_iic)
