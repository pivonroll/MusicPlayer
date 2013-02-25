#include "menuactioncontainer.h"

namespace CoreManager {
namespace ActionManager {

MenuActionContainer::MenuActionContainer(const QString &id)
    : ActionContainer(id),
      m_menu(0)
{
}

MenuActionContainer::~MenuActionContainer()
{
}

void MenuActionContainer::addAction(QAction *before, QAction *action)
{
}

void MenuActionContainer::addMenu(QAction *before, QMenu *menu)
{
}

void MenuActionContainer::removeAction(QAction *action)
{
}

void MenuActionContainer::setMenu(QMenu *menu)
{
    m_menu = menu;
}

} // namespace ActionManager
} // namespace CoreManager
