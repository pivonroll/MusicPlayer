#ifndef COREMANAGER_ACTIONMANAGER_H
#define COREMANAGER_ACTIONMANAGER_H

#include <QString>

namespace CoreManager {
namespace ActionManager {

class ActionContainer;
class ActionManager_Private;

class ActionManager
{
public:
    ActionManager();
    ~ActionManager();

    static ActionManager* instance();
    ActionContainer* createMenu(const QString &menuTitle, const QString &menuID);
    ActionContainer* createMenuBar(const QString &MenuBarID);

private:
    static ActionManager *m_instance;
    ActionManager_Private *d;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_H
