#ifndef COREMANAGER_ACTIONMANAGER_H
#define COREMANAGER_ACTIONMANAGER_H

#include <QString>
#include "../context.h"

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
    static ActionContainer* createMenu(const QString &menuID);
    static ActionContainer* createMenuBar(const QString &menuBarID);
    static ActionContainer* createToolBar(const QString &toolBarID);

    static ActionContainer* menu(const QString &id);
    static ActionContainer* menuBar(const QString &id);
    static ActionContainer* toolBar(const QString &id);

    void registerAction(QAction *action);
    void unregisterAction(QAction *action);

private:
    static ActionManager *m_instance;
    ActionManager_Private *d;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_H
