#ifndef COREMANAGER_ACTIONMANAGER_SHORTCUT_H
#define COREMANAGER_ACTIONMANAGER_SHORTCUT_H

#include <QKeySequence>

namespace CoreManager {
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
} // namespace CoreManager

#endif // COREMANAGER_ACTIONMANAGER_SHORTCUT_H
