#ifndef GUICOREMANAGER_ACTIONMANAGER_SHORTCUT_H
#define GUICOREMANAGER_ACTIONMANAGER_SHORTCUT_H

#include <QKeySequence>

namespace GuiCoreManager {
namespace ActionManager {

class Shortcut
{
public:
    Shortcut();
    Shortcut(const QKeySequence &keySequence);
    QKeySequence keySequence();
    void setKeySequence(const QKeySequence &keySequence);

private:
    QKeySequence m_keySequence;
};

} // namespace ActionManager
} // namespace GuiCoreManager

#endif // GUICOREMANAGER_ACTIONMANAGER_SHORTCUT_H
