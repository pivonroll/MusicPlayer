#ifndef COREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H
#define COREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H

#include "actioncontainer.h"

namespace CoreManager {
namespace ActionManager {

class MenuActionContainer : public ActionContainer
{
public:
    MenuActionContainer();
    ~MenuActionContainer();

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);

    QMenu* menu() const;
    void setMenu(QMenu *menu);

private:
    QMenu *m_menu;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H
