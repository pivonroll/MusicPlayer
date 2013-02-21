#include "widget.h"
#include <QApplication>
#include <pluginmanager.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    ExtensionSystem::PluginManager pluginManager;
    Q_UNUSED(pluginManager)
    QString pluginPath = QApplication::applicationDirPath() + "/../plugins";
    qDebug() << pluginPath;
    ExtensionSystem::PluginManager::setPluginPath(pluginPath);
    ExtensionSystem::PluginManager::loadPlugins();

    return a.exec();
}
