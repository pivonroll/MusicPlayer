#include "toolbaractioncontainer.h"

namespace CoreManager {
namespace ActionManager {

ToolbarActionContainer::ToolbarActionContainer(const Context::Context &context)
    : ActionContainer(context),
      m_toolBar(0)
{
}

void ToolbarActionContainer::setToolBar(QToolBar *toolBar)
{
    m_toolBar = toolBar;
}

void ToolbarActionContainer::addAction(QAction *before, QAction *action)
{
}

void ToolbarActionContainer::addMenu(QAction *before, QMenu *menu)
{
}

void ToolbarActionContainer::removeAction(QAction *action)
{
}

} // namespace ActionManager
} // namespace CoreManager
