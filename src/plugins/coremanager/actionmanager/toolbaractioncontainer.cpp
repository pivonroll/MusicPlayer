#include "toolbaractioncontainer.h"

namespace CoreManager {
namespace ActionManager {

ToolbarActionContainer::ToolbarActionContainer(const QString &id)
    : ActionContainer(id)
{
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
