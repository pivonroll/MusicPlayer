#ifndef COREMANAGER_ACTIONMANAGER_PRIVATE_H
#define COREMANAGER_ACTIONMANAGER_PRIVATE_H

#include <QList>

namespace CoreManager {

class ActionContainer;

class ActionManager_Private
{
public:
    ActionManager_Private();

private:
    QList<ActionContainer *> m_menus;
};

} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_PRIVATE_H
