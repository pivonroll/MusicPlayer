#include "shortcut.h"

namespace GuiCoreManager {
namespace ActionManager {

Shortcut::Shortcut()
{
}

Shortcut::Shortcut(const QKeySequence &keySequence)
    : m_keySequence(keySequence)
{
}

QKeySequence Shortcut::keySequence()
{
    return m_keySequence;
}

void Shortcut::setKeySequence(const QKeySequence &keySequence)
{
    m_keySequence = keySequence;
}

} // namespace ActionManager
} // namespace GuiCoreManager
