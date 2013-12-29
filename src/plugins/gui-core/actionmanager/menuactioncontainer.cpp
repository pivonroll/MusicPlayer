#include "menuactioncontainer.h"
#include <QMenu>
#include <QDebug>

namespace CoreManager {
namespace ActionManager {

MenuActionContainer::MenuActionContainer()
    : m_menu(0)
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
        qDebug() << "Cannot add action. Use setMenu first to set menu.";
        return;
    }

    else if(!action) {
        qDebug() << "Action not added. Null pointer passed as argument for action.";
        return;
    }
    m_menu->insertAction(before, action);
}

void MenuActionContainer::addMenu(QAction *before, QMenu *menu)
{
    if(!m_menu) {
        qDebug() << "Cannot insert menu. Use setMenu first to set menu.";
        return;
    }

    else if(!menu) {
        qDebug() << "Menu not inserted. Null pointer passed as argument for menu.";
        return;
    }
    m_menu->insertMenu(before, menu);
}

void MenuActionContainer::removeAction(QAction *action)
{
    if(!m_menu) {
        qDebug() << "Cannot remove action. Use setMenu first to set menu.";
        return;
    }

    else if(!action) {
        qDebug() << "Action not removed. Null pointer passed as argument for action.";
        return;
    }
    m_menu->removeAction(action);
}

void MenuActionContainer::removeMenu(QMenu *menu)
{
    if(!m_menu) {
        qDebug() << "Cannot remove menu. Use setMenu first to set menu.";
        return;
    }

    else if(!menu) {
        qDebug() << "Menu not removed. Null pointer passed as argument for menu.";
        return;
    }
    m_menu->removeAction(menu->menuAction());
}

QMenu *MenuActionContainer::menu() const
{
    return m_menu;
}

void MenuActionContainer::setMenu(QMenu *menu)
{
    if(!menu) {
        qDebug() << "Menu not set. Null pointer passed as argument.";
        return;
    }
    m_menu = menu;
}

} // namespace ActionManager
} // namespace CoreManager
