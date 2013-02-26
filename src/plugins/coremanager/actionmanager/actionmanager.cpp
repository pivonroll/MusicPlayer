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

ActionContainer *ActionManager::createMenu(const QString &menuID)
{
    ActionContainer *ac = 0;
    return ac;
}

ActionContainer *ActionManager::createMenuBar(const QString &menuBarID)
{
    return 0;
}

ActionContainer *ActionManager::createToolBar(const QString &toolBarID)
{
    return 0;
}

ActionContainer *ActionManager::menu(const QString &id)
{
}

ActionContainer *ActionManager::menuBar(const QString &id)
{
}

ActionContainer *ActionManager::toolBar(const QString &id)
{
}

void ActionManager::registerAction(QAction *action)
{
}

void ActionManager::unregisterAction(QAction *action)
{
}

} // namespace ActionManager
} // namespace CoreManager
