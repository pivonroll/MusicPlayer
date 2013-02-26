#ifndef COREMANAGER_ACTIONMANAGER_PRIVATE_H
#define COREMANAGER_ACTIONMANAGER_PRIVATE_H

#include <QHash>

class QAction;
class QShortchut;

namespace CoreManager {
namespace ActionManager {

class ActionContainer;

class ActionManager_Private
{
    QHash<QString, ActionContainer* > m_menuContaniers;
    QHash<QString, ActionContainer* > m_menuBarContainers;
    QHash<QString, ActionContainer* > m_toolBarContainers;
    QHash<QString, QAction *> m_actions;
    QHash<QString, QShortchut *> m_shortcuts;

public:
    ActionManager_Private();
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_PRIVATE_H
