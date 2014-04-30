#include "toolbaractioncontainer.h"
#include <QToolBar>
#include <QDebug>

namespace GuiCoreManager {
namespace ActionManager {

ToolbarActionContainer::ToolbarActionContainer()
    : m_toolBar(0)
{
}

void ToolbarActionContainer::addAction(QAction *before, QAction *action)
{
    if(!m_toolBar) {
        qDebug() << "Cannot add action to toolbar. No toolbar present. Use setToolBar to set toolbar.";
        return;
    }

    else if(!action) {
        qDebug() << "Action not added. Null pointer passed as argument for action.";
        return;
    }
    m_toolBar->insertAction(before, action);
}

void ToolbarActionContainer::addMenu(QAction *before, QMenu *menu)
{
    Q_UNUSED(before)
    Q_UNUSED(menu)
    qDebug() << "ToolbarActionContainer::addMenu: This method is empty.";
    return;
}

void ToolbarActionContainer::removeAction(QAction *action)
{
    if(!m_toolBar) {
        qDebug() << "Cannot remove action from toolbar. No toolbar present. Use setToolBar to set toolbar.";
        return;
    }

    else if(!action) {
        qDebug() << "Action not removed. Null pointer passed as argument for action.";
        return;
    }
    m_toolBar->removeAction(action);
}

void ToolbarActionContainer::removeMenu(QMenu *menu)
{
    Q_UNUSED(menu)
    qDebug() << "ToolbarActionContainer::removeMenu: This method is empty.";
    return;
}

QToolBar *ToolbarActionContainer::toolBar() const
{
    return m_toolBar;
}

void ToolbarActionContainer::setToolBar(QToolBar *toolBar)
{
    if(!toolBar) {
        qDebug() << "Invalid toolbar: NULL pointer passed as argument.";
    }
    m_toolBar = toolBar;
}

} // namespace ActionManager
} // namespace GuiCoreManager
