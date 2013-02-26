#include "actionmanager.h"
#include "actionmanager_private.h"
#include "menuactioncontainer.h"
#include "menubaractioncontainer.h"
#include "toolbaractioncontainer.h"

namespace CoreManager {
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

ActionContainer *ActionManager::createMenu(const QString &menuID)
{
    if(m_instance) {
        if(m_instance->d->m_menuContaniers.contains(menuID)) {
            qDebug() << "Error menu with menuID: " << menuID << " already exists.";
            return 0;
        }

        MenuActionContainer *mac = new MenuActionContainer();
        m_instance->d->m_menuContaniers.insert(menuID, mac);
        return mac;
    }

    qDebug() << "Error in ActionManager::createMenu()! Instance of ActionManager does not exist.";
    return 0;
}

ActionContainer *ActionManager::createMenuBar(const QString &menuBarID)
{
    if(m_instance) {
        if(m_instance->d->m_menuBarContainers.contains(menuID)) {
            qDebug() << "Error menu bar with menuBarID: " << menuID << " already exists.";
            return 0;
        }

        MenuBarActionContainer *mbac = new MenuBarActionContainer();
        m_instance->d->m_menuBarContainers.insert(menuBarID, mbac);
        return mac;
    }

    qDebug() << "Error in ActionManager::createMenuBar()! Instance of ActionManager does not exist.";
    return 0;
}

ActionContainer *ActionManager::createToolBar(const QString &toolBarID)
{
    if(m_instance) {
        if(m_instance->d->m_toolBarContainers.contains(menuID)) {
            qDebug() << "Error tool bar with toolBarID: " << menuID << " already exists.";
            return 0;
        }

        ToolbarActionContainer *tbac = new ToolbarActionContainer();
        m_instance->d->m_toolBarContainers.insert(toolBarID, tbac);
        return mac;
    }

    qDebug() << "Error in ActionManager::createToolBar()! Instance of ActionManager does not exist.";
    return 0;
}

ActionContainer *ActionManager::menu(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_menuContaniers.contains(id))
            return m_instance->d->m_menuContaniers.value(id);
        return 0;
    }

    qDebug() << "Error in ActionManager::menu()! Instance of ActionManager does not exist.";
    return 0;
}

ActionContainer *ActionManager::menuBar(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_menuBarContainers.contains(id))
            return m_instance->d->m_menuBarContainers.value(id);
        return 0;
    }
    qDebug() << "Error in ActionManager::menuBar()! Instance of ActionManager does not exist.";
    return 0;
}

ActionContainer *ActionManager::toolBar(const QString &id)
{
    if(m_instance) {
        if(m_instance->d->m_toolBarContainers.contains(id))
            return m_instance->d->m_toolBarContainers.value(id);
        return 0;
    }
    qDebug() << "Error in ActionManager::toolBar()! Instance of ActionManager does not exist.";
    return 0;
}

QList<Shortcut *> ActionManager::shortcuts() const
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
    return 0;
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
    return 0;
}

} // namespace ActionManager
} // namespace CoreManager
