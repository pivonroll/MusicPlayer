#ifndef COREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H
#define COREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H

#include "actioncontainer.h"

namespace CoreManager {
namespace ActionManager {

class MenuActionContainer : public ActionContainer
{
public:
    MenuActionContainer(const QString &id);
    ~MenuActionContainer();

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);

    void setMenu(QMenu *menu);

private:
    QMenu *m_menu;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H
