#ifndef COREMANAGER_ACTIONMANAGER_PRIVATE_H
#define COREMANAGER_ACTIONMANAGER_PRIVATE_H

#include <QHash>

class QMenu;

namespace CoreManager {
namespace ActionManager {

class ActionContainer;

class ActionManager_Private
{
public:
    ActionManager_Private();

private:
    QHash<QString, QMenu*> m_actionContaniers;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_PRIVATE_H
