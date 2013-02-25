#ifndef COREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H
#define COREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H

#include "actioncontainer.h"

namespace CoreManager {
namespace ActionManager {

class ToolbarActionContainer : public ActionContainer
{
public:
    ToolbarActionContainer(const QString &id);

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H
