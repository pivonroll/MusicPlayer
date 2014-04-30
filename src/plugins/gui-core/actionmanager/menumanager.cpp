#include "menumanager.h"
#include <QMenu>
#include <QDebug>

namespace GuiCoreManager {
namespace ActionManager {

MenuManager::MenuManager()
    : m_menu(0)
{
}

MenuManager::~MenuManager()
{
    delete m_menu;
    m_menu = 0;
}

void MenuManager::addAction(QAction *before, QAction *action)
{
}

void MenuManager::addMenu(QAction *before, QMenu *menu)
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

void MenuManager::removeAction(QAction *action)
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

void MenuManager::removeMenu(QMenu *menu)
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

QMenu *MenuManager::menu() const
{
    return m_menu;
}

void MenuManager::setMenu(QMenu *menu)
{
    if(!menu) {
        qDebug() << "Menu not set. Null pointer passed as argument.";
        return;
    }
    m_menu = menu;
}

} // namespace ActionManager
} // namespace GuiCoreManager
