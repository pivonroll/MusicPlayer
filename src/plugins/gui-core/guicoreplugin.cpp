#include "guicoreplugin.h"
#include "guicoreplugin_constants.h"
#include "mainwindow.h"

namespace GuiCore {
namespace Internal {

GuiCorePlugin* GuiCorePlugin::m_instance = 0;

GuiCorePlugin::GuiCorePlugin()
{
    m_instance = this;
}

GuiCorePlugin::~GuiCorePlugin()
{
}

void GuiCorePlugin::initialize()
{
    m_instance->m_mainWindow = new Gui::MainWindow;
    m_instance->m_mainWindow->show();
}

QString GuiCorePlugin::pluginName() const
{
    return QString::fromLatin1(Constants::GuiCorePlugin_Name);
}

GuiCorePlugin *GuiCorePlugin::instance()
{
    return m_instance;
}

} // namespace Internal
} // namespace GuiCore

Q_PLUGIN_METADATA(IID IPlugin_iic)
