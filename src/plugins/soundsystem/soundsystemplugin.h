#ifndef PLAYSYSTEM_INTERNAL_PLAYSYSTEMPLUGIN_H
#define PLAYSYSTEM_INTERNAL_PLAYSYSTEMPLUGIN_H

#include <iplugin.h>

namespace PlaySystem {
namespace Internal {

class SoundSystemPlugin : public QObject, public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    SoundSystemPlugin();
    ~SoundSystemPlugin();
    void initialize();
    QString pluginName() const;
};

} // namespace Internal
} // namespace PlaySystem

#endif // PLAYSYSTEM_INTERNAL_PLAYSYSTEMPLUGIN_H
