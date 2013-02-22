#ifndef CORE_INTERNAL_COREMANAGER_H
#define CORE_INTERNAL_COREMANAGER_H

#include <iplugin.h>

namespace CoreManagerPlugin {

class ActionContainer;

namespace Internal {

class CoreManager_Private;

class CorePlugin : public QObject, public ExtensionSystem::IPlugin
{
    Q_OBJECT
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
