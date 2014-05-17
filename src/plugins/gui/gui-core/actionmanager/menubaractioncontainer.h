#ifndef GUICOREMANAGER_MENUBARACTIONCONTAINER_H
#define GUICOREMANAGER_MENUBARACTIONCONTAINER_H

#include "actioncontainer.h"

QT_BEGIN_NAMESPACE
class QMenuBar;
QT_END_NAMESPACE

namespace GuiCoreManager {
namespace ActionManager {

class MenuBarActionContainer : public IActionContainer
{
public:
    MenuBarActionContainer();

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);

    QMenuBar* menuBar() const;
    void setMenuBar(QMenuBar *menuBar);

private:
    QMenuBar *m_menuBar;
};

} // namespace ActionManager
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_MENUBARACTIONCONTAINER_H
