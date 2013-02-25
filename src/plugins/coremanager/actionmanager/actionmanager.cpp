#include "actionmanager.h"
#include "actionmanager_private.h"

namespace CoreManager {
namespace ActionManager {

ActionManager* ActionManager::m_instance = 0;

ActionManager::ActionManager()
    : d(new ActionManager_Private)
{
    m_instance = this;
}

ActionManager::~ActionManager()
{
}

ActionManager *ActionManager::instance()
{
    return m_instance;
}

ActionContainer *ActionManager::createMenu(const QString &menuTitle, const QString &menuID)
{
    ActionContainer *ac = 0;
    return ac;
}

ActionContainer *ActionManager::createMenuBar(const QString &MenuBarID)
{
    return 0;
}

} // namespace ActionManager
} // namespace CoreManager
