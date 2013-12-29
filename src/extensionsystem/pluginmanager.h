#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <QString>
#include "extensionsystem_global.h"

namespace ExtensionSystem {

class IPlugin;

class EXTENSIONSYSTEM_EXPORT PluginManager
{
public:
    PluginManager();
    virtual ~PluginManager();

    static void loadPlugins();
    static void setPluginPath(const QString &path);

private:
    void    initializePlugin(IPlugin *plugin);

    static PluginManager* m_instance;
    QString m_pluginPath;
};

} // namespace ExtensionSystem
#endif // PLUGINMANAGER_H
