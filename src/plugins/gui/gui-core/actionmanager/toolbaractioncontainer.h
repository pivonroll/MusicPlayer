#ifndef GUICOREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H
#define GUICOREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H

#include "actioncontainer.h"

QT_BEGIN_NAMESPACE
class QToolBar;
QT_END_NAMESPACE

namespace GuiCoreManager {
namespace ActionManager {

class ToolbarActionContainer : public IActionContainer
{
public:
    ToolbarActionContainer();

    void addAction(QAction *before, QAction *action);
    void addMenu(QAction *before, QMenu *menu);

    void removeAction(QAction *action);
    void removeMenu(QMenu *menu);

    QToolBar* toolBar() const;
    void setToolBar(QToolBar *toolBar);

private:
    QToolBar *m_toolBar;
};

} // namespace ActionManager
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_ACTIONMANAGER_TOOLBARACTIONCONTAINER_H
