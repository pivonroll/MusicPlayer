#ifndef PLAYSYSTEM_INTERNAL_PLAYSYSTEMPLUGIN_H
#define PLAYSYSTEM_INTERNAL_PLAYSYSTEMPLUGIN_H

#include <iplugin.h>
#include "soundsystem_global.h"

namespace SoundSystem {
namespace Internal {

class SOUNDSYSTEM_EXPORT SoundSystemPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPlugin_iic FILE "soundsystem.json")
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    SoundSystemPlugin();
    ~SoundSystemPlugin();
    QString pluginName() const;

protected:
    void initialize();
};

} // namespace Internal
} // namespace SoundSystem

#endif // PLAYSYSTEM_INTERNAL_PLAYSYSTEMPLUGIN_H
