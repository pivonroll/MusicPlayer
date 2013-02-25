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
    ActionContainer(const Context::Context &context);
    virtual ~ActionContainer();

    Context::Context context() const;

    virtual void addAction(QAction *before, QAction *action) = 0;
    virtual void addMenu(QAction *before, QMenu *menu) = 0;

    virtual void removeAction(QAction *action) = 0;
    virtual void removeMenu(QMenu *menu) = 0;

protected:
    Context::Context m_context;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONCONTAINER_H
