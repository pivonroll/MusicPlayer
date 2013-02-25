#include "menubaractioncontainer.h"

namespace CoreManager {
namespace ActionManager {

MenuBarActionContainer::MenuBarActionContainer(const QString &id)
    : ActionContainer(id),
      m_menuBar(0)
{
}

void MenuBarActionContainer::addAction(QAction *before, QAction *action)
{
}

void MenuBarActionContainer::addMenu(QAction *before, QMenu *menu)
{
}

void MenuBarActionContainer::removeAction(QAction *action)
{
}

void MenuBarActionContainer::removeMenu(QMenu *menu)
{
}

void MenuBarActionContainer::setMenuBar(QMenuBar *menuBar)
{
    m_menuBar = menuBar;
}

} // namespace ActionManager
} // namespace CoreManager
