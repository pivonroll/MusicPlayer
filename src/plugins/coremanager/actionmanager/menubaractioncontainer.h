#ifndef COREMANAGER_MENUBARACTIONCONTAINER_H
#define COREMANAGER_MENUBARACTIONCONTAINER_H

#include "actioncontainer.h"

class QMenuBar;

namespace CoreManager {
namespace ActionManager {

class MenuBarActionContainer : public ActionContainer
{
public:
    MenuBarActionContainer(const Context::Context &context);

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);

    void setMenuBar(QMenuBar *menuBar);

private:
    QMenuBar *m_menuBar;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_MENUBARACTIONCONTAINER_H
