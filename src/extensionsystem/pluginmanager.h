#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <QString>

namespace ExtensionSystem {

class IPlugin;

class PluginManager
{
public:
    PluginManager();
    virtual ~PluginManager();

    static void loadPlugins();
    static void setPluginPath(const QString &path);

private:
    void    initializePlugin(IPlugin *plugin);
private:
    static PluginManager* m_instance;
    QString m_pluginPath;
};

} // namespace ExtensionSystem
#endif // PLUGINMANAGER_H
