#ifndef FIRSTPLUGIN_H
#define FIRSTPLUGIN_H

#include <QObject>
#include <iplugin.h>

namespace FirstManager {
namespace Internal {

class FirstPlugin : public QObject, public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    explicit FirstPlugin(QObject *parent = 0);
    ~FirstPlugin();

    void initialize();
};

} // Internal
} // FirstManager

#endif // FIRSTPLUGIN_H
