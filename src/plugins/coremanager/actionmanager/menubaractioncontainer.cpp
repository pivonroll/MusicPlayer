#include "menubaractioncontainer.h"
#include <QMenuBar>
#include <QDebug>

namespace CoreManager {
namespace ActionManager {

MenuBarActionContainer::MenuBarActionContainer(const Context::Context &context)
    : ActionContainer(context),
      m_menuBar(0)
{
}

void MenuBarActionContainer::addAction(QAction *before, QAction *action)
{
    if(!m_menuBar) {
        qDebug() << "Cannot add action. Menu bar is not present. Use setMenuBar to set menu bar.";
        return;
    }

    else if(!action) {
        qDebug() << "No action inserted. Null pointer passed as argument for action.";
        return;
    }
    m_menuBar->insertAction(before, action);
}

void MenuBarActionContainer::addMenu(QAction *before, QMenu *menu)
{
    if(!m_menuBar) {
        qDebug() << "Cannot add menu. Menu bar is not present. Use setMenuBar to set menu bar.";
        return;
    }

    else if(!menu) {
        qDebug() << "No menu inserted. Null pointer passed as argument for menu.";
        return;
    }
    m_menuBar->insertMenu(before, menu);
}

void MenuBarActionContainer::removeAction(QAction *action)
{
    if(!m_menuBar) {
        qDebug() << "Cannot remove action. Menu bar is not present. Use setMenuBar to set menu bar.";
        return;
    }

    else if(!action) {
        qDebug() << "No action removed. Null pointer passed as argument for action.";
        return;
    }
    m_menuBar->removeAction(action);
}

void MenuBarActionContainer::removeMenu(QMenu *menu)
{
    if(!m_menuBar) {
        qDebug() << "Cannot remove menu. Menu bar is not present. Use setMenuBar to set menu bar.";
        return;
    }

    else if(!menu) {
        qDebug() << "No menu removed. Null pointer passed as argument for menu.";
        return;
    }
    m_menuBar->removeAction(menu->menuAction());
}

void MenuBarActionContainer::setMenuBar(QMenuBar *menuBar)
{
    if(!menuBar) {
        qDebug() << "Menu bar not set. Null pointer passed as argument.";
        return;
    }
    m_menuBar = menuBar;
}

} // namespace ActionManager
} // namespace CoreManager
