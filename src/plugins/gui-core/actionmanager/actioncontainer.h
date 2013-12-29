#ifndef COREMANAGER_ACTIONCONTAINER_H
#define COREMANAGER_ACTIONCONTAINER_H

#include <QString>
#include "context.h"

class QMenu;
class QAction;

namespace CoreManager {
namespace ActionManager {

class ActionContainer
{
public:
    ActionContainer();
    virtual ~ActionContainer();

    virtual void addAction(QAction *before, QAction *action) = 0;
    virtual void addMenu(QAction *before, QMenu *menu) = 0;

    virtual void removeAction(QAction *action) = 0;
    virtual void removeMenu(QMenu *menu) = 0;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONCONTAINER_H
