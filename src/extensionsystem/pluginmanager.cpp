#include "pluginmanager.h"
#include <QDir>
#include <QPluginLoader>
#include <QDebug>

#include "iplugin.h"

namespace ExtensionSystem {

PluginManager* PluginManager::m_instance = 0;

PluginManager::PluginManager()
{
    m_instance = this;
}

PluginManager::~PluginManager()
{
}

void PluginManager::loadPlugins()
{
    QDir pluginsDir = QDir(m_instance->m_pluginPath);

    qDebug() << "Accessing plugins in folder: " << pluginsDir.path();

    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
#ifdef Q_OS_WIN
        if(fileName.endsWith(".dll")) {
#else
        if(fileName.endsWith(".so")) {
#endif
            qDebug() << "Testing " << pluginsDir.absoluteFilePath(fileName);
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            if (loader.load()) {
                qDebug() << "Plugin loaded successfully: " << fileName;

                QObject *pluginInstance = loader.instance();
                IPlugin *plugin = qobject_cast<IPlugin *>(pluginInstance);
                if(plugin)
                    m_instance->initializePlugin(plugin);
            }
            else {
                qDebug() << "Failed to load plugin: " << fileName << "Error: " << loader.errorString();
            }
        }
    }
}

void PluginManager::setPluginPath(const QString &path)
{
    m_instance->m_pluginPath = path;
}

void PluginManager::initializePlugin(IPlugin *plugin)
{
    if(!plugin) {
        qDebug() << "PluginManager::initializePlugin(): NULL pointer argument.";
        return;
    }

    try {
        plugin->initialize();
        qDebug() << "PluginManager::initializePlugin(): Plugin" << plugin->pluginName() << "successfully initialized";
    }

    catch(...) {
        qDebug() << "PluginManager::initializePlugin(): Unexpected error while initializing plugin: " << plugin->pluginName();
    }
}

} // Plugins
