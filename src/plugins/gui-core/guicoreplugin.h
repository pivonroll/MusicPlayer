#ifndef GUICORE_INTERNAL_GUICOREPLUGIN_H
#define GUICORE_INTERNAL_GUICOREPLUGIN_H

#include <iplugin.h>

namespace GuiCore {
namespace Gui {
    class MainWindow;
}

namespace Internal {

class GuiCorePlugin : public QObject, public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_INTERFACES(ExtensionSystem::IPlugin)
public:
    GuiCorePlugin();
    ~GuiCorePlugin();
    void initialize();
    QString pluginName() const;

    static GuiCorePlugin* instance();

private:
    Gui::MainWindow *m_mainWindow;
    static GuiCorePlugin *m_instance;
};

} // namespace Internal
} // namespace GuiCore

#endif // GUICORE_INTERNAL_GUICOREPLUGIN_H
