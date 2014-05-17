#include "actionmanager.h"

#include <QDebug>

#include "actionmanager_private.h"
#include "menumanager.h"
#include "menubaractioncontainer.h"
#include "toolbaractioncontainer.h"
#include "shortcut.h"

namespace GuiCoreManager {
namespace ActionManager {

ActionManager* ActionManager::m_instance = 0;

ActionManager::ActionManager()
    : d(new ActionManager_Private)
{
    m_instance = this;
}

ActionManager::~ActionManager()
{
}

ActionManager *ActionManager::instance()
{
    return m_instance;
}

IActionContainer *ActionManager::createMenu(const QString &menuID)
{
    if(m_instance) {
        if(m_instance->d->m_menuContaniers.contains(menuID)) {
            qDebug() << "Error menu with menuID: " << menuID << " already exists.";
            return 0;
        }

        MenuManager *mac = new MenuManager();
        m_instance->d->m_menuContaniers.insert(menuID, mac);
        return mac;
    }

    qDebug() << "Error in ActionManager::createMenu()! Instance of ActionManager does not exist.";
    return 0;
}

IActionContainer *ActionManager::createMenuBar(const QString &menuBarID)
{
    if(m_instance) {
        if(m_instance->d->m_menuBarContainers.contains(menuBarID)) {
            qDebug() << "Error menu bar with menuBarID: " << menuBarID << " already exists.";
            return 0;
        }

        MenuBarActionContainer *mbac = new MenuBarActionContainer();
        m_instance->d->m_menuBarContainers.insert(menuBarID, mbac);
        return mbac;
    }

    qDebug() << "Error in ActionManager::createMenuBar()! Instance of ActionManager does not exist.";
    return 0;
}

IActionContainer *ActionManager::createToolBar(const QString &toolBarID)
{
    if(m_instance) {
        if(m_instance->d->m_toolBarContainers.contains(toolBarID)) {
            qDebug() << "Error tool bar with toolBarID: " << toolBarID << " already exists.";
            return 0;
        }

        ToolbarActionContainer *tbac = new ToolbarActionContainer();
        m_instance->d->m_toolBarContainers.insert(toolBarID, tbac);
        return tbac;
    }

    qDebug() << "Error in ActionManager::createToolBar()! Instance of ActionManager does not exist.";
    return 0;
}

IActionContainer *ActionManager::menu(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_menuContaniers.contains(id))
            return m_instance->d->m_menuContaniers.value(id);
        return 0;
    }

    qDebug() << "Error in ActionManager::menu()! Instance of ActionManager does not exist.";
    return 0;
}

IActionContainer *ActionManager::menuBar(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_menuBarContainers.contains(id))
            return m_instance->d->m_menuBarContainers.value(id);
        return 0;
    }
    qDebug() << "Error in ActionManager::menuBar()! Instance of ActionManager does not exist.";
    return 0;
}

IActionContainer *ActionManager::toolBar(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_toolBarContainers.contains(id))
            return m_instance->d->m_toolBarContainers.value(id);
        return 0;
    }
    qDebug() << "Error in ActionManager::toolBar()! Instance of ActionManager does not exist.";
    return 0;
}

Shortcut *ActionManager::createShortcut(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_shortcuts.contains(id)) {
            qDebug() << "Shortcut with id:" << id << " already exists.";
            return m_instance->d->m_shortcuts.value(id);
        }

        Shortcut *s = new Shortcut();
        m_instance->d->m_shortcuts.insert(id, s);
        return s;
    }

    qDebug() << "Error in ActionManager::createShortcut()! Instance of ActionManager does not exist.";
    return 0;
}

void ActionManager::removeShortcut(const QString &id)
{
    if(m_instance) {
        if(!m_instance->d->m_shortcuts.contains(id)) {
            qDebug() << "Remove shortcut failed. Shortcut with id:" << id << " not found";
            return;
        }
        m_instance->d->m_shortcuts.remove(id);
        return;
    }

    qDebug() << "Error in ActionManager::createShortcut()! Instance of ActionManager does not exist.";
}

QList<Shortcut *> ActionManager::shortcuts()
{
    return m_instance->d->m_shortcuts.values();
}

void ActionManager::registerAction(QAction *action, const QString &actionID)
{
    if(m_instance) {
        if(m_instance->d->m_actions.contains(actionID)) {
            qDebug() << "Error actionID: " << actionID << " already present.";
            return;
        }
        m_instance->d->m_actions.insert(actionID, action);
        return;
    }

    qDebug() << "Error in ActionManager::registerAction();! Instance of ActionManager does not exist.";
}

void ActionManager::unregisterAction(const QString &actionID)
{
    if(m_instance) {
        if(m_instance->d->m_actions.contains(actionID)) {
            m_instance->d->m_actions.remove(actionID);
            return;
        }
        qDebug() << "Error actionID: " << actionID << " not present.";
        return;
    }

    qDebug() << "Error in ActionManager::registerAction();! Instance of ActionManager does not exist.";
}

} // namespace ActionManager
} // namespace GuiCoreManager
