#include "coremanagerplugin.h"
#include "coremanager_private.h"
#include "coremanager_constants.h"
#include <QDebug>

namespace CoreManagerPlugin {
namespace Internal {

CorePlugin* CorePlugin::m_instance = 0;

CorePlugin::CorePlugin()
    : d(new CoreManager_Private)
{
    m_instance = this;
}

CorePlugin::~CorePlugin()
{
    delete d;
    d = 0;
}

CorePlugin *CorePlugin::instance()
{
    return m_instance;
}

void CorePlugin::initialize()
{
}

QString CorePlugin::pluginName() const
{
    return QString::fromLatin1(Constants::CoreManagerPlugin_Name);
}

} // namespace Internal
} // namespace CoreManagerPlugin

Q_EXPORT_PLUGIN(CoreManagerPlugin::Internal::CorePlugin)

