#ifndef COREMANAGER_ACTIONMANAGER_PRIVATE_H
#define COREMANAGER_ACTIONMANAGER_PRIVATE_H

#include <QHash>

class QAction;
class QShortcut;

namespace CoreManager {
namespace ActionManager {

class ActionContainer;

class ActionManager_Private
{
public:
    QHash<QString, ActionContainer* > m_menuContaniers;
    QHash<QString, ActionContainer* > m_menuBarContainers;
    QHash<QString, ActionContainer* > m_toolBarContainers;
    QHash<QString, QAction *> m_actions;
    QHash<QString, QShortcut *> m_shortcuts;

    ActionManager_Private();
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_PRIVATE_H
