#ifndef CORE_INTERNAL_COREMANAGER_H
#define CORE_INTERNAL_COREMANAGER_H

#include <iplugin.h>
#include "coremanager_global.h"

namespace CoreManagerPlugin {

class ActionContainer;

namespace Internal {

class CoreManager_Private;

class COREMANAGER_EXPORT CorePlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPlugin_iic FILE "coremanager.json")
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    CorePlugin();
    virtual ~CorePlugin();
    static CorePlugin* instance();
    void initialize();
    QString pluginName() const;

private:
    static CorePlugin *m_instance;
    CoreManager_Private *d;
    ActionContainer *m_actionContainer;
};

} // namespace Internal
} // namespace CoreManagerPlugin

#endif // CORE_INTERNAL_COREMANAGER_H
