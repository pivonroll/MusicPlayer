#include "menuactioncontainer.h"
#include <QMenu>

namespace CoreManager {
namespace ActionManager {

MenuActionContainer::MenuActionContainer(const Context::Context &context)
    : ActionContainer(context),
      m_menu(0)
{
}

MenuActionContainer::~MenuActionContainer()
{
    delete m_menu;
    m_menu = 0;
}

void MenuActionContainer::addAction(QAction *before, QAction *action)
{
    if(!m_menu) {
        qDebug() << "Cannot insert action into MenuActionContainer. Use setMenu first to set menu.";
        return;
    }
    m_menu->insertAction(before, action);
}

void MenuActionContainer::addMenu(QAction *before, QMenu *menu)
{
    if(!m_menu) {
        qDebug() << "Cannot insert menu into MenuActionContainer. Use setMenu first to set menu.";
        return;
    }
    m_menu->insertMenu(before, menu);
}

void MenuActionContainer::removeAction(QAction *action)
{
    if(!m_menu) {
        qDebug() << "Cannot remove action from MenuActionContainer. Use setMenu first to set menu.";
        return;
    }
    m_menu->removeAction(action);
}

void MenuActionContainer::removeMenu(QMenu *menu)
{
    if(!m_menu) {
        qDebug() << "Cannot remove menu from MenuActionContainer. Use setMenu first to set menu.";
        return;
    }
    m_menu->removeAction(menu->menuAction());
}

void MenuActionContainer::setMenu(QMenu *menu)
{
    m_menu = menu;
}

} // namespace ActionManager
} // namespace CoreManager
