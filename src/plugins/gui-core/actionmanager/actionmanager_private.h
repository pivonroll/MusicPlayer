#ifndef GUICOREMANAGER_ACTIONMANAGER_PRIVATE_H
#define GUICOREMANAGER_ACTIONMANAGER_PRIVATE_H

#include <QHash>
#include <QString>

QT_BEGIN_NAMESPACE
class QAction;
QT_END_NAMESPACE

namespace GuiCoreManager {
namespace ActionManager {

class IActionContainer;
class Shortcut;

class ActionManager_Private
{
public:
    QHash<QString, IActionContainer* > m_menuContaniers;
    QHash<QString, IActionContainer* > m_menuBarContainers;
    QHash<QString, IActionContainer* > m_toolBarContainers;
    QHash<QString, QAction *> m_actions;
    QHash<QString, Shortcut *> m_shortcuts;

    ActionManager_Private();
};

} // namespace ActionManager
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_ACTIONMANAGER_PRIVATE_H
