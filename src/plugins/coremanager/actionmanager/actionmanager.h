#ifndef COREMANAGER_ACTIONMANAGER_H
#define COREMANAGER_ACTIONMANAGER_H

#include <QString>

namespace CoreManager {

class ActionContainer;
class ActionManager_Private;

class ActionManager
{
public:
    ActionManager();
    ~ActionManager();

    static ActionManager* instance();
    ActionContainer* createMenu(const QString &menuTitle, const QString &menuID);

private:
    static ActionManager *m_instance;
    ActionManager_Private *d;
};

} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_H
