#ifndef GUICOREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H
#define GUICOREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H

#include "actioncontainer.h"

namespace GuiCoreManager {
namespace ActionManager {

class MenuManager : public IActionContainer
{
public:
    MenuManager();
    ~MenuManager();

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
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_ACTIONMANAGER_MENUACTIONCONTAINER_H
