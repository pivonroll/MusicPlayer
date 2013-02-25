#ifndef COREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H
#define COREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H

#include "actioncontainer.h"

class QToolBar;

namespace CoreManager {
namespace ActionManager {

class ToolbarActionContainer : public ActionContainer
{
public:
    ToolbarActionContainer(const Context::Context &context);

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);

    void setToolBar(QToolBar *toolBar);

private:
    QToolBar *m_toolBar;
};

} // namespace ActionManager
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H
