#ifndef GUICOREMANAGER_ACTIONCONTAINER_H
#define GUICOREMANAGER_ACTIONCONTAINER_H

#include <QString>
#include "context.h"

QT_BEGIN_NAMESPACE
class QMenu;
class QAction;
QT_END_NAMESPACE

namespace GuiCoreManager {
namespace ActionManager {

class IActionContainer
{
public:
    virtual ~IActionContainer();

    virtual void addAction(QAction *before, QAction *action) = 0;
    virtual void removeAction(QAction *action) = 0;
};

} // namespace ActionManager
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_ACTIONCONTAINER_H
