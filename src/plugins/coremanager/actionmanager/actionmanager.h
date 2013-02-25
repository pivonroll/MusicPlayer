#ifndef COREMANAGER_ACTIONMANAGER_H
#define COREMANAGER_ACTIONMANAGER_H

#include <QString>

class QAction;

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

    void registerAction(QAction *action);
    void unregisterAction(QAction *action);

private:
    static ActionManager *m_instance;
    ActionManager_Private *d;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_H
