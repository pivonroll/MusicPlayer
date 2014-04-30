#ifndef GUICOREMANAGER_ACTIONMANAGER_H
#define GUICOREMANAGER_ACTIONMANAGER_H

#include <QString>

QT_BEGIN_NAMESPACE
class QAction;
QT_END_NAMESPACE

namespace GuiCoreManager {
namespace ActionManager {

class IActionContainer;
class ActionManager_Private;
class Shortcut;

class ActionManager
{
public:
    ActionManager();
    ~ActionManager();

    static ActionManager* instance();
    static IActionContainer* createMenu(const QString &menuID);
    static IActionContainer* createMenuBar(const QString &menuBarID);
    static IActionContainer* createToolBar(const QString &toolBarID);

    static IActionContainer* menu(const QString &id);
    static IActionContainer* menuBar(const QString &id);
    static IActionContainer* toolBar(const QString &id);

    static Shortcut *createShortcut(const QString &id);
    static void removeShortcut(const QString &id);
    static QList<Shortcut *> shortcuts();

    void registerAction(QAction *action, const QString &actionID);
    void unregisterAction(const QString &actionID);

private:
    static ActionManager *m_instance;
    ActionManager_Private *d;
};

} // namespace ActionManager
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_ACTIONMANAGER_H
