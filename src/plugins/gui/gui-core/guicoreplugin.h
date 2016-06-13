#ifndef GUICORE_INTERNAL_GUICOREPLUGIN_H
#define GUICORE_INTERNAL_GUICOREPLUGIN_H

#include <iplugin.h>
#include "guicore_global.h"

namespace GuiCore {
namespace Gui {
    class MainWindow;
}

class GUICORE_EXPORT GuiCorePlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID IPlugin_iic FILE "guicore.json")
    Q_INTERFACES(ExtensionSystem::IPlugin)

public:
    GuiCorePlugin();
    ~GuiCorePlugin();
    QString pluginName() const;

    static GuiCorePlugin* instance();

signals:
    void initialized();
    void uninitialized();

protected:
    void initialize();

private:
    Gui::MainWindow *m_mainWindow;
    static GuiCorePlugin *m_instance;
};

} // namespace GuiCore

#endif // GUICORE_INTERNAL_GUICOREPLUGIN_H
