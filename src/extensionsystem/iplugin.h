#ifndef IMyPluginInterface_H
#define IMyPluginInterface_H

#include "extensionsystem_global.h"
#include <QtPlugin>

#define IPlugin_iic "com.PluginTest.extensionsystem.IPlugin"

namespace ExtensionSystem {

class EXTENSIONSYSTEM_EXPORT IPlugin : public QObject
{
    friend class PluginManager;
public:
    IPlugin();
    virtual ~IPlugin();
    virtual QString pluginName() const = 0;

protected:
    virtual void initialize() = 0;
};

} // namespace ExtensionSystem
Q_DECLARE_INTERFACE(ExtensionSystem::IPlugin, IPlugin_iic)
#endif // IMyPluginInterface_H
